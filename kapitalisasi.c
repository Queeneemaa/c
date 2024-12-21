#include <stdio.h>
#include <string.h>

int main()
{
    char c[34];
    scanf("%s", c);

    for (int i = 0; i < strlen(c); i++)
    {
        c[i] = c[i] - 'a' + 'A';
    }
    printf("%s", c);
}