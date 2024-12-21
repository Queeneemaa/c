#include <stdio.h>

int main(){
    int M, N;
    int matriks[100][100];
    scanf ("%d %d" ,&M, &N);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
        scanf("%d", &matriks[i][j]);
        }
    }

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++) {
        printf("%d ", matriks[i][j]);
    }
        printf("\n");
    }

}