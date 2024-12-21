#include <stdio.h>

void BenderaIndonesia(int lebar)
{
    if (lebar < 2 || lebar % 2 != 0)
    {
        printf("#\n");
        return;
    }

    int panjang = lebar * 2;

    for (int i = 0; i < panjang / 2 / 2; i++)
    {
        for (int j = 0; j < lebar * 2; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < panjang / 2 / 2; i++)
    {
        for (int j = 0; j < lebar * 2; j++)
        {
            printf(".");
        }
        printf("\n");
    }
}

int main()
{
    int lebar;
    scanf("%d", &lebar);

    BenderaIndonesia(lebar);

    return 0;
}