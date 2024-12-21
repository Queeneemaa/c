#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int matriks[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &matriks[i][j]);
        }
    }

    int sum_diag1 = 0;
    int sum_diag2 = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i == j){
                sum_diag1 += matriks[i][j];
            }
            if (j == N-1-i){
                sum_diag2 += matriks[i][j];
            }
        }
    }
    printf("%d %d", sum_diag1, sum_diag2);

    return 0;
}