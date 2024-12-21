#include <stdio.h>

int max(int A[], int p, int q) {
    int max_value = A[p - 1];
    for (int i = p; i <= q; i++) {
        if (A[i - 1] > max_value) {
            max_value = A[i - 1];
        }
    }
    return max_value;
}

int main() {
    int N, T;
    scanf("%d %d", &N, &T);

    int pasukan[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &pasukan[i]);
    }

    for (int t = 0; t < T; t++) {
        int p, q;
        scanf("%d %d", &p, &q);
        int result = max(pasukan, p, q);
        printf("%d\n", result);
    }

    return 0;
}
