#include <stdio.h>

int main(){
    int n;
    scanf ("%d", &n);

    while (n >= 0) {
        n -= 3;
        printf("%d ", n);
    }
    printf("\n");

    return 0;

}