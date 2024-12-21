#include <stdio.h>

int main()
{
    int x;
    printf("masukan tahun lahir = ");
    scanf("%d", &x);

    int y;
    printf("masukan tahun sekarang = ");
    scanf("%d", &y);

    char nama[10];
    printf("masukan nama = ");
    scanf("%d", &nama);

    int umur;

    umur = y-x;

    printf("umur %s adalah = %d", nama, umur);

    return 0;


}
