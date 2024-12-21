#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N, K;
        scanf("%d %d", &N, &K);

        // Menghitung posisi Akashi dalam barisan
        int remainingPlayers = N - K;
        int restingPosition = (K - 1) % remainingPlayers;

        // Jika restingPosition adalah 0, posisi Akashi adalah N
        int positionAkashi = (restingPosition == 0) ? N : restingPosition;

        printf("%d\n", positionAkashi);
    }

    return 0;
}
