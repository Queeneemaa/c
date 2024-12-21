#include <stdio.h>

int tambahkan(int N) {
    if (N == 1) {
        return 1;
    } else {
        return N + tambahkan(N - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printf("%d\n", tambahkan(N));

    return 0;
}