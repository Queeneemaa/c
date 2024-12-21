#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int array[N];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%d\n%d\n", evenCount, oddCount);

    return 0;
}