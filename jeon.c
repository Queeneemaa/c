#include <stdio.h>

int main()
{
    char operation;
    long long int N, M;

    // Meminta input operasi
    scanf(" %c", &operation);

    // Meminta input dua angka
    scanf("%lld", &N);

    scanf("%lld", &M);

    // Melakukan operasi berdasarkan jenis operasi yang diminta
    if (operation == 'K')
    {
        // Memeriksa apakah M merupakan kelipatan dari N
        if (N % M == 0)
        {
            printf("Bener banget cuy!\t\n");
        }
        else
        {
            printf("\tBukan nih.\n");
        }
    }
    else if (operation == 'F')
    {
        // Memeriksa apakah N merupakan pembagi dari M
        if (M % N == 0)
        {
            printf("Bener banget cuy!\t\n");
        }
        else
        {
            printf("\tBukan nih.\n");
        }
    }
    else
    {
        printf("Kamu masukin apa?\n");
    }

    return 0;
}