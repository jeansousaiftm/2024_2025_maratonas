#include<bits/stdc++.h>

using namespace std;

int main() {



    int a, b, x;
    while (scanf("%d %d", &a, &b) && a + b > 0) {
        unordered_map<int, int> ca, cb;
        for (int i = 0; i < a; i++) {
            scanf("%d", &x);
            if (ca.count(x) == 0) {
                ca[x] = 1;
            } else {
                ca[x]++;
            }
        }
        for (int i = 0; i < b; i++) {
            scanf("%d", &x);
            if (cb.count(x) == 0) {
                cb[x] = 1;
            } else {
                cb[x]++;
            }
        }
        int ua = 0, ub = 0;
        unordered_map<int, int>::iterator it;
        for (it = ca.begin(); it != ca.end(); it++) {
            //printf("%d %d\n", (*it).first, (*it).second);
            if (cb.count((*it).first) == 0) {
                ua++;
            }
        }
        for (it = cb.begin(); it != cb.end(); it++) {
            //printf("%d %d\n", (*it).first, (*it).second);
            if (ca.count((*it).first) == 0) {
                ub++;
            }
        }
        printf("%d\n", (ua < ub) ? ua : ub);
    }

    return 0;
}
