#include<bits/stdc++.h>
using namespace std;

int disp(int d[], int c) {
    for (int i = c + 1; i < 53; i++) {
        if (d[i] == 0) return i;
    }
    return -1;
}

int main() {
    int a[3], b[2], d[53];

    while (scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &b[0], &b[1]) && (a[0] + a[1] + a[2] + b[0] + b[1]) > 0) {

        for (int i = 0; i < 53; i++) d[i] = 0;

        d[a[0]]++;
        d[a[1]]++;
        d[a[2]]++;
        d[b[0]]++;
        d[b[1]]++;

        sort(a, a + 3);
        sort(b, b + 2);

        //printf("%d %d %d %d %d\n", a[0], a[1], a[2], b[0], b[1]);

        if (b[1] > a[2]) {
            if (b[0] > a[2]) {
                printf("%d\n", disp(d, 0));
                continue;
            } if (b[0] > a[1]) {
                printf("%d\n", disp(d, a[1]));
                continue;
            } else {
                printf("%d\n", disp(d, a[2]));
                continue;
            }
        } else if (b[0] > a[1]) {
            printf("%d\n", disp(d, a[1]));
            continue;
        }

        printf("-1\n");

    }

    return 0;
}
