#include <stdio.h>

void printMatrix(int N, int matrix[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void rotateMatrix(int N, int matrix[][N]) {
    int tempMatrix[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tempMatrix[i][j] = matrix[j][N - 1 - i];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = tempMatrix[i][j];
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N, M;
        scanf("%d %d", &N, &M);

        int matrix[N][N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        for (int i = 0; i < M; i++) {
            rotateMatrix(N, matrix);
        }

        printMatrix(N, matrix);

        if (t < T - 1) {
            printf("\n");
        }
    }

    return 0;
}
