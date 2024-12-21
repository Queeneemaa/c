#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("*");
        } else {
            printf("%d", i);
        }

        // Cetak spasi atau newline jika bukan elemen terakhir
        if (i < n) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}


    