#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int high = 0;


    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        if (i == 0 || arr[i] > arr[high]) {
            high = i;
        }
    }


    int highnum = arr[high];
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] == highnum
) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}