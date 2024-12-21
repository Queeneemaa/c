#include <stdio.h>

int main(){
    int n, arr[100], K;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);
    
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == K){
            found = i;
            break;
        }
    } printf ("%d\n", found);

    return 0;

}