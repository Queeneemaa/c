#include <stdio.h>

int hitungNolDiAkhir(int n) {
    int count = 0;
    while (n % 10 == 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int hasilFaktorial = 1;

    for (int i = 2; i <= n; i++) {
        hasilFaktorial *= i;
    }

    int jumlahNol = hitungNolDiAkhir(hasilFaktorial);

    if (jumlahNol % 2 == 1) {
        printf("Hadeh, kenapa ganjil sih!\n");
    } else {
        printf("Mantap bang!!\n");
    }

    return 0;
}
