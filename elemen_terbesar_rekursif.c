#include <stdio.h>

int findMax(int array[], int n) {
    if (n == 1) {
        return array[0];
    }
    
    int max = findMax(array, n - 1);
    return (array[n - 1] > max) ? array[n - 1] : max;
}

int main() {
    int N;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int max = findMax(array, N);
    printf("%d\n", max);

    return 0;
}
