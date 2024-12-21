#include <stdio.h>
int main() {
    long long faktorial = 1;
    int n;

    if (n < 0) {
        printf("tidak terdefinisi");
    } else {
        for (int i = 1; i <= n; i++) {
            faktorial *= i;
        }
        printf("%lld\n", faktorial);
    }

    return 0;
}
