#include<bits/stdc++.h>

int merge(int v[], int s, int m, int e) {
    int trocas = 0;
    int tmp[(e - s) + 1];
    int i = s, j = m + 1, k = 0;
    while (i <= m && j <= e) {
        if (v[i] <= v[j]) {
            tmp[k++] = v[i++];
        } else {
            trocas += (j - (s + k));
            tmp[k++] = v[j++];
        }
    }
    while (i <= m) {
        tmp[k++] = v[i++];
    }
    while (j <= e) {
        tmp[k++] = v[j++];
    }
    for (int i = s, k = 0; i <= e; i++, k++) {
        v[i] = tmp[k];
    }
    //printf("%d %d %d %d\n", s, m, e, trocas);
    return trocas;
}

int mergeSort(int v[], int s, int e) {
    int trocas = 0;
    if (s < e) {
        int m = (s + e) / 2;
        trocas += mergeSort(v, s, m);
        trocas += mergeSort(v, m + 1, e);
        trocas += merge(v, s, m, e);
    }
    return trocas;
}

int bubbleSort(int v[], int n) {
    int trocas = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                trocas++;
            }
        }
    }
    return trocas;
}

void countingSort() {

    char tmp[] = "Abacate";
    char res[1000];
    long long balde[256];
    for (int i = 0; i < 256; i++) balde[i] = 0;
    for (int i = 0; i < strlen(tmp); i++) {
        balde[tmp[i]]++;
    }
    int j = 0;
    for (int i = 0; i < 256; i++) {
        while (balde[i] > 0) {
            res[j++] = i;
            balde[i]--;
        }
    }
    res[j] = '\0';
    printf("%s\n", res);

}

bool buscaBinaria(int v[], int n, int x) {

    int s = 0, e = n - 1;

    while (s <= e) {
        int m = (s + e) / 2;
        if (v[m] == x) {
            return true;
        } else if (x < v[m]) {
            e = m - 1;
        } else {
            s = m + 1;
        }
    }

    return false;

}

int main() {

    // 1. Ler a coleção inteira e dps ordenar
    // 2. Ler cada elemento e ir ordenando automaticamente

    // 3. Counting Sort Tempo O(n) Espaço O(k)
    // inteiros, 0 <= k <= 10^5

    //char 0 - 255


    // 4. Merge Sort O(n log n)
    // 5. Bubble Sort O(n^2)

    int v1[] = { 8, 6, 5, 7, 1, 3, 2, 4 };
    int v2[] = { 8, 6, 5, 7, 1, 3, 2, 4 };

    printf("%d\n", bubbleSort(v1, 8));
    printf("%d\n", mergeSort(v2, 0, 7));

    return 0;
}
