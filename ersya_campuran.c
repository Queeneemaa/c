#include <stdio.h>

int main() {
    char kode_operasi;
    int N, M;

    // Membaca kode operasi ('K' atau 'F')
    scanf(" %c", &kode_operasi);

    // Membaca bilangan N dan M
    scanf("%d %d", &N, &M);

    if (kode_operasi == 'K') {
        // Check apakah N merupakan kelipatan dari M
        if (N % M == 0) {
            printf("Bener banget cuy!\n");
        } else {
            printf("Bukan nih.\n");
        }
    } else if (kode_operasi == 'F') {
        // Check apakah N merupakan pembagi dari M
        if (M % N == 0) {
            printf("Bener banget cuy!\n");
        } else {
            printf("Bukan nih.\n");
        }
    } else {
        printf("Kamu masukin apa?\n");
    }

    return 0;
}
