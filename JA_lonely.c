#include <stdio.h>

void operasiPointer(long long int *a, long long int *b, long long int *c, long long int *d, long long int *e) {
    *b = *a % *b;         
    *d = *c * *d;         
    *e = (*b + *d) % *e;  

   // *b = sum1;
    //*d = sum2;
    //*e = sum3;
}

int main() {
    long long int T;
    scanf("%lld", &T);

    for (int t = 0; t < T; t++) {
        long long int a, b, c, d, e;
        scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
        operasiPointer(&a, &b, &c, &d, &e);

        printf("%lld\n", e);
    }

    return 0;
}
