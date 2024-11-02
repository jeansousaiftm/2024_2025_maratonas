#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Competidor {
    int numero, qtd, tempo;
    Competidor() {}
    Competidor(int _numero) {
        numero = _numero;
        qtd = 0;
        tempo = 0;
    }
    void print() {
        printf("%d %d %d\n", numero, qtd, tempo);
    }
};

bool compare(Competidor a, Competidor b) {
    if (a.qtd == b.qtd) {
        if (a.tempo == b.tempo) {
            return a.numero < b.numero;
        }
        return a.tempo < b.tempo;
    }
    return a.qtd > b.qtd;
}

int main() {
    int c, p;
    scanf("%d %d", &c, &p);
    Competidor competidores[c + 1];
    for (int i = 1; i <= c; i++) {
        competidores[i] = Competidor(i);
    }
    for (int i = 0; i < p; i++) {
        int nc, t, pen;
        scanf("%d %*c %d %d", &nc, &t, &pen);
        competidores[nc].qtd++;
        competidores[nc].tempo += t + ((pen - 1) * 20);
    }

    sort(competidores + 1, competidores + c + 1, compare);

    for (int i = 1; i <= c; i++) {
        competidores[i].print();
    }

    return 0;
}
