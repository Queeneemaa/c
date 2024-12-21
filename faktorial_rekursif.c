#include <stdio.h>

// Deklarasi prototipe fungsi
unsigned long long faktorial(int n);

int main() {
    int N;
    scanf("%d", &N);
    printf("%llu\n", faktorial(N));
    return 0;
}

// Definisi fungsi rekursif
unsigned long long faktorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * faktorial(n - 1);
}
