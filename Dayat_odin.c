#include <stdio.h>

int main() {

    long long T, C, N, x;
    scanf("%lld %lld %lld %lld", &T, &C, &N, &x);

    long long hasil = x;
    for (int i = 0; i < N; i++) {
        hasil = T * hasil + C;
    }

    printf("%lld\n", hasil);

    return 0;
}
