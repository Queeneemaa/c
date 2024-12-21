#include <stdio.h>

void update(int *a, int *b)
{
    int sum1 = *a + *b;
    int sum2 = *a - *b;

    *a = sum1;
    *b = sum2;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d %d", a, b);

    return 0;
}