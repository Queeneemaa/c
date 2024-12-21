#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 3 == 0 && N % 5 == 0) {
        printf("Kelipatan 3 dan 5\n");
    } else if (N % 3 == 0) {
        printf("Kelipatan 3\n");
    } else if (N % 5 == 0) {
        printf("Kelipatan 5\n");
    } else {
        printf("Bukan kelipatan 3 atau 5\n");
    }

    return 0;
}
