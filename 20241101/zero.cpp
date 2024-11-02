#include<stdio.h>
#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int> l, c;

    int n, m;
    scanf("%d %d", &n, &m);
    int r[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &r[i][j]);
            if (r[i][j] != 0) continue;
            l.insert(i);
            c.insert(j);
        }
    }

    for (set<int>::iterator it = l.begin(); it != l.end(); it++) {
        for (int i = 0; i < m; i++) {
            r[(*it)][i] = 0;
        }
        //printf("%d\n", (*it));
    }

    for (set<int>::iterator it = c.begin(); it != c.end(); it++) {
        for (int i = 0; i < n; i++) {
            r[i][(*it)] = 0;
        }
        //printf("%d\n", (*it));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}
