#include <stdio.h>

int Sm(int m, int n) {
    if (n == 0) {
        return m;
    }
    return Sm(m, n - 1) + 1;
}

int main() {
    int m, n;
    printf("Enter the integer m: ");
    scanf("%d", &m);
    printf("Enter the nonnegative integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n must be a nonnegative integer.\n");
        return 1;
    }

    int result = Sm(m, n);
    printf("Sm(%d, %d) = %d\n", m, n, result);

    return 0;
}
