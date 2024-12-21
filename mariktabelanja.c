#include <stdio.h>

int main() {
    long long int kodeBarang, jumlahBarang;
    scanf("%lld %lld", &kodeBarang, &jumlahBarang);

    int hargaSatuan;
    switch (kodeBarang) {
        case 101:
            hargaSatuan = 20000;
            break;
        case 102:
            hargaSatuan = 100000;
            break;
        case 103:
            hargaSatuan = 45000;
            break;
        case 104:
            hargaSatuan = 60000;
            break;
        default:
            return 0;  
    }

    long long int hargaTotal = hargaSatuan * jumlahBarang;

    double diskon;
    if (hargaTotal >= 150000) {
        diskon = 0.4;
    } else if (hargaTotal >= 100000) {
        diskon = 0.3;
    } else if (hargaTotal >= 50000) {
        diskon = 0.2;
    } else if (hargaTotal >= 25000) {
        diskon = 0.1;
    }

    long long int hargaAkhir = hargaTotal - (hargaTotal * diskon);
    printf("%lld\n", hargaAkhir);

    return 0;
}
