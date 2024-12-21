#include <stdio.h>
int main()
{
    int n, m;
    int a = 0;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (a < x)
        {
            a = x;
        }
        else
        {
        }
    }
    printf("%d", a);
}