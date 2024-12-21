#include <stdio.h>
int main () {
    int A;
    scanf("%d", &A);

    int angka[A];
    for (int i = 0; i < A; i++) {
        scanf("%d", &angka[i]);
    }

    for (int i = A - 1; i >= 0; i--) {
        printf("%d\n", angka[i]);
    }
    

    return 0;
}
