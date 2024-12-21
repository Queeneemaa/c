#include <stdio.h>
#include <string.h>

struct Anggota
{
    char nama[100];
    char posisi[100];
    int angkatan;
    int umur;
    char asal[100];
};

int main()
{
    struct Anggota geng[20];
    int n, a;
    char cari[100];
    int ketemu = 0;
    scanf("%d", &n);

    for (a = 0; a < n; a++)
    {
        scanf("%s%s%d%d%s", &geng[a].nama, &geng[a].posisi, &geng[a].angkatan, &geng[a].umur, &geng[a].asal);
    }

    scanf("%s", &cari);

    for (a = 0; a < n; a++)
    {
        if (strcmp(cari, geng[a].nama) == 0 ||
            strcmp(cari, geng[a].posisi) == 0 ||
            strcmp(cari, geng[a].asal) == 0 ||
            atoi(cari) == geng[a].angkatan ||
            atoi(cari) == geng[a].umur)
        {
            printf("Nama: %s\n", geng[a].nama);
            printf("Posisi: %s\n", geng[a].posisi);
            printf("Angkatan: %d\n", geng[a].angkatan);
            printf("Umur: %d\n", geng[a].umur);
            printf("Asal: %s\n", geng[a].asal);
            ketemu++;
        }
    }
    if (ketemu < 1)
    {
        printf("Gaada kuh, hakelah...\n");
    }

    return 0;
}