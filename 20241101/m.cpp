#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    map<long long, int> m;
    int n, r = 1;
    long long x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &x);
            if (m.count(x)) {
                m[x]++;
            } else {
                m.insert({m, 1});
            }
            if (m[x] > n) r = 0;
        }
    }
    printf("%d\n", r);
    return 0;
}
