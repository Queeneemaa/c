#include <stdio.h>
int main()
{
    int a;
    int n;
    scanf("%d", &a);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int arr[n];
        scanf("%d", &arr[n]);

        if (a % 2 != 0)
        {
            if (arr[n] % 2 != 0)
            {
                printf("AMAN\n");
            }

            else
            {
                printf("TILANG\n");
            }
        }

        else
        {
            if (arr[n] % 2 != 0)
            {
                printf("TILANG\n");
            }

            else
            {
                printf("AMAN\n");
            }
        }
    }

    return 0;
}