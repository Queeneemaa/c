#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            printf("GENAP\n");
        }

        else
        {
            printf("GANJIL\n");
        }
    }
}