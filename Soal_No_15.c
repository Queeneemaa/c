#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n must be a positive integer.\n");
        return 1;
    }

    int f_2n = fibonacci(2 * n);

    int sum = 0;
    for (int i = 0; i < 2 * n; ++i) {
        sum += fibonacci(i) * fibonacci(i + 1);
    }

    printf("f_0 f_1 + f_1 f_2 + ... + f_{2n-1} f_{2n} = %d\n", sum);
    printf("f_{2n}^2 = %d\n", f_2n * f_2n);

    if (sum == f_2n * f_2n) {
        printf("The expression is verified for n = %d\n", n);
    } else {
        printf("The expression is NOT verified for n = %d\n", n);
    }

    return 0;
}
