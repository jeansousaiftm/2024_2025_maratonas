#include<stdio.h>


int main() {

    int v[50];
    v[3] = 3;
    v[4] = 5;
    v[5] = 8;
    v[6] = 13;
    v[7] = 21;
    v[8] = 34;
    v[9] = 55;
    v[10] = 89;
    v[11] = 144;
    v[12] = 233;
    v[13] = 377;
    v[14] = 610;
    v[15] = 987;
    v[16] = 1597;
    v[17] = 2584;
    v[18] = 4181;
    v[19] = 6765;
    v[20] = 10946;
    v[21] = 17711;
    v[22] = 28657;
    v[23] = 46368;
    v[24] = 75025;
    v[25] = 121393;
    v[26] = 196418;
    v[27] = 317811;
    v[28] = 514229;
    v[29] = 832040;
    v[30] = 1346269;
    v[31] = 2178309;
    v[32] = 3524578;
    v[33] = 5702887;
    v[34] = 9227465;
    v[35] = 14930352;
    v[36] = 24157817;
    v[37] = 39088169;
    v[38] = 63245986;
    v[39] = 102334155;
    v[40] = 165580141;
    v[41] = 267914296;
    v[42] = 433494437;
    v[43] = 701408733;
    v[44] = 1134903170;
    v[45] = 1836311903;
    v[46] = 2971215073;
    v[47] = 4807526976;
    v[48] = 7778742049;
    v[49] = 12586269025;

    int n, x;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &x);
        printf("%d\n", v[x]);
    }
    return 0;
}
