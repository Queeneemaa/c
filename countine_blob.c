#include <stdio.h>

int arr[1000007] = {0};

int main(){
    int n;
    scanf("%d", &n);

    int counting = 0;

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        arr[a]++;

        if (arr[a + 1] > 0) {
            arr[a + 1]--;
        } else {
            counting++;
        }
    }

    printf("%d\n", counting);
} 