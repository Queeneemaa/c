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

    int fn_minus_1 = fibonacci(n - 1);
    int fn = fibonacci(n);
    int fn_plus_1 = fibonacci(n + 1);

    int result = fn_plus_1 * fn_minus_1 - fn * fn;
    int expected = (n % 2 == 0) ? 1 : -1;

    printf("f_%d * f_%d - f_%d^2 = %d\n", n + 1, n - 1, n, result);
    printf("Expected result: %d\n", expected);

    if (result == expected) {
        printf("The expression is verified for n = %d\n", n);
    } else {
        printf("The expression is NOT verified for n = %d\n", n);
    }

    return 0;
}
