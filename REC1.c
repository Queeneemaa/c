#include <stdio.h>

void urutanAngka(int N, int a, int b) {
    if (N == 0) {
        return;
    }

    printf("%d ", a);
    urutanAngka(N - 1, b, a + b);
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (N == 0) {
        printf("0\n");
        return 0;
    }
    int a = 0, b = 3;
    urutanAngka(N, a, b);

    return 0;
}
