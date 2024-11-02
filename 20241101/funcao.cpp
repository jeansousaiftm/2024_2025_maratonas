#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {

    map<char, int> carac;

    carac.insert(make_pair('{', 1));
    carac.insert({'[', 2});
    carac.insert({'(', 3});
    carac.insert({'}', -1});
    carac.insert({']', -2});
    carac.insert({')', -3});

    char tmp[500];
    scanf("%s", tmp);

    stack<int> s;

    for (int i = 0; tmp[i] != '\0'; i++) {
        if (carac.count(tmp[i])) {
            int v = carac[tmp[i]];
            if (v > 0) {
                if (s.empty() || s.top() < v) {
                    s.push(v);
                } else {
                    printf("N\n");
                    return 0;
                }
            } else {
                if (s.empty()) {
                    printf("N\n");
                    return 0;
                }
                if (s.top() + v != 0) {
                    printf("N\n");
                    return 0;
                }
                s.pop();
            }
        }
    }

    if (s.empty()) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
