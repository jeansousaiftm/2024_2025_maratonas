#include<bits/stdc++.h>

using namespace std;

void imprimir(list<char> lista) {
    list<char>::iterator it;
    for (it = lista.begin(); it != lista.end(); it++) {
        printf("%c", (*it));
    }
    printf("\n");
}

void printList(list<char> janeDown, list<char> janeUp, list<char> johnDown, list<char> johnUp) {
    list<char>::iterator it;
    printf("Jane down: ");
    for (it = janeDown.begin(); it != janeDown.end(); it++) {
        printf("%c ", (*it));
    }
    printf("\n");
    printf("Jane up: ");
    for (it = janeUp.begin(); it != janeUp.end(); it++) {
        printf("%c ", (*it));
    }
    printf("\n");
    printf("John down: ");
    for (it = johnDown.begin(); it != johnDown.end(); it++) {
        printf("%c ", (*it));
    }
    printf("\n");
    printf("John up: ");
    for (it = johnUp.begin(); it != johnUp.end(); it++) {
        printf("%c ", (*it));
    }
    printf("\n\n");
}

int main() {

    int n;

    scanf("%d%*c", &n);

    for (int x = 0; x < n; x++) {

        if (x > 0) printf("\n");

        scanf("%*c");

        int ganhou = 0;
        char tmp[100];
        list<char> janeDown, janeUp, johnDown, johnUp;

        int snap[] = { 0, 0, 1, 1 };

        scanf("%s", tmp);
        for (int i = 0; i < strlen(tmp); i++) {
            janeDown.push_back(tmp[i]);
        }

        scanf("%s", tmp);
        for (int i = 0; i < strlen(tmp); i++) {
            johnDown.push_back(tmp[i]);
        }

        for (int t = 0, s = 0; t < 1000; t++) {

            janeUp.push_front(janeDown.front());
            janeDown.pop_front();

            johnUp.push_front(johnDown.front());
            johnDown.pop_front();

            if (janeUp.front() == johnUp.front()) {
                int r = rand() / 141 % 2;
                if (r == 0) {
                    while (johnUp.size() > 0) {
                        janeUp.push_front(johnUp.back());
                        johnUp.pop_back();
                    }
                    printf("Snap! for Jane: ");
                    imprimir(janeUp);
                } else {
                    while (janeUp.size() > 0) {
                        johnUp.push_front(janeUp.back());
                        janeUp.pop_back();
                    }
                    printf("Snap! for John: ");
                    imprimir(johnUp);
                }
            }

            if (janeDown.size() == 0) {
                while (janeUp.size() > 0) {
                    janeDown.push_front(janeUp.front());
                    janeUp.pop_front();
                }
            }

            if (johnDown.size() == 0) {
                while (johnUp.size() > 0) {
                    johnDown.push_front(johnUp.front());
                    johnUp.pop_front();
                }
            }

            //printList(janeDown, janeUp, johnDown, johnUp);

            if (janeDown.size() == 0) {
                printf("John wins.\n");
                ganhou = 1;
                break;
            }

            if (johnDown.size() == 0) {
                printf("Jane wins.\n");
                ganhou = 1;
                break;
            }

        }

        if (ganhou == 0) printf("Keeps going and going ...\n");

    }

    return 0;
}
