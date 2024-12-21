#include <stdio.h>

int f(int N) {
    if (N == 1) {
        return 1;
    } else if (N % 2 == 1) {
        return f(3 * N + 1);
    } else {
        return f(N / 2);
    }
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    while (K > 1) {
        if (N % 2 == 1) {
            N = 3 * N + 1;
        } else {
            N = N / 2;
        }
        K--;
    }

    printf("%d\n", N);

    return 0;
}
