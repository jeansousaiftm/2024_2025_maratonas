#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define PI 3.14159

double volume(double b, double B, double h) {
    return ((PI * h) / 3) * ((b * b) + (b * B) + (B * B));
}

int main() {

    double ta, qp, total, b, B, h;

    scanf("%lf %lf", &qp, &ta);
    total = ta / qp;

    scanf("%lf %lf %lf", &b, &B, &h);

    double hi = 0, hf = h, Bi = b, Bf = B;

    while (true) {
        double hm = (hf + hi) / 2;
        double Bm = (Bf + Bi) / 2;
        double v = volume(b, Bm, hm);
        printf("%.2lf %.2lf %.2lf %.10lf\n", b, Bm, hm, v);
        if (fabs(total - v) < 0.000001) {
            printf("%.2lf\n", hm);
            return 0;
        } else if (v > total) {
            hf = hm;
            Bf = Bm;
        } else {
            hi = hm;
            Bi = Bm;
        }
    }

    return 0;
}
