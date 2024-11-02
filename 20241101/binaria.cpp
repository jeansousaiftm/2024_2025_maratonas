#include<stdio.h>
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

void printWithoutLeadingZeros(const char s[]) {
    bool findOne = false;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1') findOne = true;
        if (findOne) {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

int main() {

    int n, x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        bitset<30> b(x);
        printWithoutLeadingZeros(b.to_string().c_str());
    }

    return 0;
}
