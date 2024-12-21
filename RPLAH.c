#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int hitung = 0;
    for (int i = 0; i < N; i++) {
        int ang;
        scanf("%d", &ang);

        if (ang == K) {
            hitung++;
        }
    }
    printf("%d\n", hitung);

    return 0;
}