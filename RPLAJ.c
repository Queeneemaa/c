#include <stdio.h>
int sempurna(int N) {
    if (N == 1) {
        return 0; 
    }


    int sum = 1;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            if (i * i != N) {
                sum += i + N / i;
            } else {
                sum += i; 
            }
        }
    }
    return sum == N;
}

int main() {
    int N;
    scanf("%d", &N);

    int ditemukan = 0;

    for (int i = 2; i <= N; i++) {
        if (sempurna(i)) {
            printf("%d ", i);
            ditemukan = 1;
        }
    }


        if (!ditemukan) {
            printf("Tidak ada bilangan sempurna");
        }
    return 0;
}