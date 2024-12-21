#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c){
        printf("TRIO");
    } else if (a == b || b == c || c == a) {
        printf("DUO");
    } else {
        printf("SOLO");
    }

    return 0;
}