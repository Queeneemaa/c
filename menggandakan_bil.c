#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N <= 1000) {
        N *= 2;
        printf("%d ", N);
    }

    printf("\n");

    return 0;
}

