#include <stdio.h>

int main (){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == B && B == C){
        printf ("semua sama\n");
    } else if (A == B || A == C || B == C) {
        printf ("dua sama\n");
    } else {
        printf ("semua berbeda");
    }
    return 0;
}