#include <stdio.h>

struct Mahasiswa {
    char nama[100];
    int umur;
    double IPK;
};

int main() {
    struct Mahasiswa mhs;
    scanf("%s", &mhs.nama);
    scanf("%d", &mhs.umur);
    scanf("%lf", &mhs.IPK);

    printf("Nama: %s, Umur: %d tahun, IPK: %.2lf\n", mhs.nama, mhs.umur, mhs.IPK);

    return 0;
}
