#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a && *b;
    int d = *b && *a;

    *a = c;
    *b = d;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d %d\n", a, b);
    void swap(int *a, int *b);
    printf("%d %d\n", b, a);

    return 0;
}