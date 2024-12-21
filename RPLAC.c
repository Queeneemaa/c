#include <stdio.h>

int prima(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    scanf("%d", &N);

    int p = 0;
    
    for (int i = 2; i <= N; i++) {
        if (prima(i)) {
            printf("%d ", i);
            p = 1;
        }
    }

    if (!p) {
        printf("Tidak ada bilangan prima");
    }

    return 0;
}