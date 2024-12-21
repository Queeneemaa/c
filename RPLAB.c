#include <stdio.h>

int main(){
    int A, B;
    scanf ("%d %d", &A, &B);

    if (A > B){
        printf ("A lebih besar dari B\n");
    } else if (A < B){
        printf ("A lebih kecil dari B\n\n");
    } else {
        printf ("A sama dengan B\n");
    } 

    return 0;

}