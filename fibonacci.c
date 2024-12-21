#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a = 1, b = 1, count = 0;

    while (count < N) {
        if (a % 2 != 0) {
            printf("%d", a);
            count++;
            if (count < N) {
                printf(" ");
            }
        }

        int c = a + b;
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}