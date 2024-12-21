#include <stdio.h>


int main() {
int n;
    scanf ("%d", &n);
    for (int i = 2; i <= n  ; i++) {
        
        int isNotPrima = 0;
        
        for(int j = 2; j < i ; j++){
            if(i % j ==0){
                isNotPrima = 1;
            }
        }
        
        if (isNotPrima == 1){
            printf ("%d ", i);
            
        }
        else {
            printf ("* ");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}