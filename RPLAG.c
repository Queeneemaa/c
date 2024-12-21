#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    long arr[N], min, i=0;

    while(N--){
        scanf("%ld", &arr[i]);
        if(i == 0){
            min = arr[0];
        }
        if(arr[i] < min){
            min = arr[i];
        }
        i++;
    }

    printf("%ld ", min);
    return 0;
}