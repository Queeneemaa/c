#include <stdio.h>

int main (){
    int N;
    int i;
    scanf ("%d", &N);

    for (i = 1; i <= N; i++) {
    if (i % 2 == 0) {
    printf("%d ", i);
    }
    }

    return 0;
}