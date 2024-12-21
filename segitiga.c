#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    while (T--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a == b && b == c){
            printf("sama sisi\n");
            break;
        } 
        else {
            printf("salah\n");
        }

    }
    
    return 0;
}