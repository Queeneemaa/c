#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    //int sisaRoti = M % N;
    if (M % N == 0){
        printf("%d\n", N);
    } else {
        printf ("%d\n", M % N);
    }

    //printf("%d\n", sisaRoti);

    return 0;
}