#include <stdio.h>

int main() {
    int n;
    printf("input: ");
    scanf("%d", &n);

    int jumlah_lembar_250000 = 0;
    int jumlah_lembar_100000 = 0;
    int jumlah_lembar_50000 = 0;
    int jumlah_lembar_20000 = 0;
    int jumlah_lembar_10000 = 0;
    int jumlah_lembar_5000 = 0;

    while (n > 0) {
        if (n >= 250) {
            jumlah_lembar_250000++;
            n -= 250;
        } else if (n >= 100) {
            jumlah_lembar_100000++;
            n -= 100;
        } else if (n >= 50) {
            jumlah_lembar_50000++;
            n -= 50;
        } else if (n >= 20) {
            jumlah_lembar_20000++;
            n -= 20;
        } else if (n >= 10) {
            jumlah_lembar_10000++;
            n -= 10;
        } else if (n >= 5) {
            jumlah_lembar_5000++;
            n -= 5;
        } else {
            // Jika harga tidak mungkin dibentuk
            printf("Ersya Mengsedih :(\n");
            return 0;
        }
    }

    // Jika harga berhasil dibentuk, cetak jumlah lembar uang untuk tiap pecahan
    printf("%d lembar 250 ribuan\n", jumlah_lembar_250000);
    printf("%d lembar 100 ribuan\n", jumlah_lembar_100000);
    printf("%d lembar 50 ribuan\n", jumlah_lembar_50000);
    printf("%d lembar 20 ribuan\n", jumlah_lembar_20000);
    printf("%d lembar 10 ribuan\n", jumlah_lembar_10000);
    printf("%d lembar 5 ribuan\n", jumlah_lembar_5000);

    return 0;
}
