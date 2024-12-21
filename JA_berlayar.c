#include <stdio.h>

void boat(char b[], int y)
{
    for (int i = 0; i < y; i++)
    {
        if (b[i] == '#')
        {
            b[i] = '=';
            printf("%s\n", b);
            break;
        }
        b[i] = '=';
        printf("%s\n", b);
        b[i] = '.';
    }
}

int main()
{
    int y, a;
    scanf("%d %d", &y, &a);
    char b[11] = "..........";
    b[a - 1] = '#';
    boat(b, y);
}