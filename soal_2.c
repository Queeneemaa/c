#include <stdio.h>

int main ()
{
    int x;

    scanf("%d", &x);

    for (int i = 2; i <= x; i++){

        if ((i == 2 || i == 3 || i == 5 || i == 7) || ( i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)){
            printf("*");

        } else {
            printf("%d ", i);

        }
    }

    return 0;
}