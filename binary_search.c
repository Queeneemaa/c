#include <stdio.h>

int main(){
    int n, arr[100], K;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    } scanf("%d", &K);

    int low = 0, high = n - 1, mid, found = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == K) {
            found = mid;
            break;
        } else if (arr[mid] < K) {
            low = mid + 1;
        } else {
        high = mid - 1;
        }
    }printf("%d\n", found);
}