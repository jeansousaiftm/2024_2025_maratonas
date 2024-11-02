#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Pizza {
    char nome[500];
    int qi, qc, qf;
    double preco;

    Pizza() {}

    Pizza(char _nome[], int _qi, double _preco) {
        strcpy(nome, _nome);
        qi = _qi;
        preco = _preco;
        qf = qi;
        qc = 0;
    }

    void consumir(int q) {
        if (q > 0) {
            qf -= q;
            qc += q;
        }
    }

    void print() {
        printf("%s | %d | %.2lf | %d | %d | %.2lf\n", nome, qi, preco, qf, qc, qf * preco);
    }
};

bool compare(Pizza a, Pizza b) {
    if (a.qc == b.qc) {
        if (a.qf == b.qf) {
            if (a.preco == b.preco) {
                return strcmp(a.nome, b.nome);
            }
            return a.preco < b.preco;
        }
        return a.qf > b.qf;
    }
    return a.qc > b.qc;
}

int main() {

    map<string, int> c;

    int n, x;
    scanf("%d%*c", &n);
    Pizza p[n];

    for (int i = 0; i < n; i++) {
        char nome[500];
        int qi;
        double preco;
        scanf("%[^\n]%*c%d%*c%lf%*c", nome, &qi, &preco);
        p[i] = Pizza(nome, qi, preco);
        c.insert({ nome, i });
    }

    while(scanf("%d%*c", &x) && x != -1) {
        char nome[500];
        scanf("%[^\n]%*c", nome);
        p[c[nome]].consumir(x);
    }

    sort(p, p + n, compare);

    for (int i = 0; i < n; i++) {
        p[i].print();
    }

    return 0;
}
