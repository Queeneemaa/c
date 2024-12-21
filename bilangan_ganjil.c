#include <stdio.h>

int main(){
    int T, N;
    scanf("%d", &T);

    while ((T--)){
        scanf("%d", &N);
        
        int sum = 0;
        for(int i = 1, j = 1; i <= N; i++, j += 2){
            sum += j;
        }

        printf("%d\n", sum);
    }
    
    return 0;
    
}
  