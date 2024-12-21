#include <stdio.h>

int main() {
    int nilaiTes, usia;
    scanf("%d %d", &nilaiTes, &usia);

    if (nilaiTes >= 85) {
        if (usia < 20) {
            printf("Diterima dengan Beasiswa\n");
        } else {
            printf("Diterima\n");
        }
    } else if (nilaiTes >= 60) {
        if (usia < 20) {
            printf("Diterima\n");
        } else {
            printf("Dipertimbangkan\n");
        }
    } else {
        printf("Ditolak\n");
    }

    return 0;
}
