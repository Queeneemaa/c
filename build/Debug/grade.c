#include <stdio.h>

int main(){
    #include <stdio.h>
    int N;
    scanf("%d", &N);

    if (N >= 90 && N <= 100) {
        printf("A\n");
    } else if (N >= 80 && N <= 89) {
        printf("B\n");
    } else if (N >= 70 && N <= 79) {
        printf("C\n");
    } else if (N >= 60 && N <= 69) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}

