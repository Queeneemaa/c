#include <stdio.h>
#include <string.h>

int Palindrom(int n, int h[1005], float a[1005], char g[1005][3], char name[1005][105])
{
    for (int i = 0; i < n / 2; i++)
    {
        int j = n - i - 1;

        int similarity = 0;
        if (h[i] == h[j])
            similarity++;
        if (a[i] == a[j])
            similarity++;
        if (g[i][0] == g[j][0])
            similarity++;
        if (strcmp(name[i], name[j]) == 0)
            similarity++;

        if (similarity >= 2)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int h[1005];
    float a[1005];
    char g[1005][3];
    char name[1005][105];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %f %c %[^\n]", &h[i], &a[i], g[i], name[i]);
    }

    if (Palindrom(n, h, a, g, name))
    {
        printf("Siap perang, Dewi Shita!\n");
    }
    else
    {
        printf("Sebentar Dewi Shita, belum palindrom nih.\n");

        for (int i = 0; i < n; i++)
        {
            int j = n - i - 1;

            int similarity = 0;
            if (h[i] == h[j])
                similarity++;
            if (a[i] == a[j])
                similarity++;
            if (g[i][0] == g[j][0])
                similarity++;
            if (strcmp(name[i], name[j]) == 0)
                similarity++;

            if (similarity < 2)
            {
                printf("%d ", i + 1);
            }
        }
        printf("\n");
    }

    return 0;
}
