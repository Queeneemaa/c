#include <stdio.h>

int jumlahSum(int M) {
    if (M == 0) {
        return 0;
    }

    int currentNumber;
    scanf("%d", &currentNumber);

    return currentNumber + jumlahSum(M - 1);
}

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N - M; i++) {
        int num;
        scanf("%d", &num);
    }

    printf("%d\n", jumlahSum(M));

    return 0;
}
