#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        for (int j = 0; j < B; j++) {
            printf("%d", A);
        }

        printf("\n"); // Baris baru setelah mencetak angka A sebanyak B kali
    }

    return 0;
}
