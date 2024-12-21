#include <stdio.h>

void print_matrix(int mat[][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int get_minimum_matrix(int mat[][10], int n, int m) {
    int dp[10][10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dp[i][j][0] = mat[i][j];
        }
    }

    for (int k = 1; k < n; k++) {
        for (int i = 0; i < n - k; i++) {
            for (int j = 0; j < m; j++) {
                int min_val = 1000000000;
                for (int x = 0; x < k; x++) {
                    int temp = dp[i][j][x] + dp[i + x + 1][j][k - x - 1];
                    if (temp < min_val) {
                        min_val = temp;
                    }
                }
                dp[i][j][k] = min_val;
            }
        }
    }

    return dp[0][0][n - 1];
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        int mat[10][10];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        int min_val = get_minimum_matrix(mat, n, m);
        printf("%d\n", min_val);
    }

    return 0;
}