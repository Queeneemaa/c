#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N, H;
    scanf("%d %d", &N, &H);

    int *W = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &W[i]);
    }

    qsort(W, N, sizeof(int), compare);

    int result = 0;
    int days = N / H;
    int remainder = N % H;

    for (int i = 0; i < days; i++) {
        int maxWeight = 0;
        for (int j = 0; j < H; j++) {
            if (W[i * H + j] > maxWeight) {
                maxWeight = W[i * H + j];
            }
        }
        result += maxWeight;
    }

    int maxWeight = 0;
    for (int i = days * H; i < N; i++) {
        if (W[i] > maxWeight) {
            maxWeight = W[i];
        }
    }
    result += maxWeight;

    printf("%d\n", result);

    free(W);

    return 0;
}
