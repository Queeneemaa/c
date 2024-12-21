#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int angka[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &angka[i]);
    }

    // Mencetak angka secara terbalik
    for (int i = N - 1; i >= 0; i--) {
        printf("%d\n", angka[i]);
    }
     


    return 0;
}
