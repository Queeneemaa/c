#include <stdio.h>

unsigned long long deretAngka(int n);

int main() {
    int N;
    scanf("%d", &N);
    printf("%llu\n", deretAngka(N));
    return 0;
}

unsigned long long deretAngka(int n) {
    if (n == 0) {
        return 1;
    }
    return n; 
}
