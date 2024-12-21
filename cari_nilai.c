#include <stdio.h>
#include <string.h>

struct Siswa {
    int no_absen;
    char nama[20];
    char nilai;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Siswa siswa[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %c", &siswa[i].no_absen, siswa[i].nama, &siswa[i].nilai);
    }

    char nilai_dicari;
    scanf(" %c", &nilai_dicari);

    int ditemukan = 0; 

    for (int i = 0; i < n; i++) {
        if (siswa[i].nilai == nilai_dicari) {
            printf("%d %s\n", siswa[i].no_absen, siswa[i].nama);
            ditemukan = 1;
        }
    }

    if (!ditemukan) {
        printf("Nilai tersebut tidak ditemukan!\n");
    }

    return 0;
}