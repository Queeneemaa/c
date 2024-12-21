#include <stdio.h>

int mayoritas(int arr[], int N) {
    int kandidat = -1, count = 0;


    for (int i = 0; i < N; i++) {
        if (count == 0) {
            kandidat = arr[i];
            count = 1;
        } else if (arr[i] == kandidat) {
            count++;
        } else {
            count--;
        }
    }


    count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == kandidat) {
            count++;
        }
    }

    if (count > N / 2) {
        return kandidat;
    } else {
        return -1; 
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int result = mayoritas(arr, N);
        if (result != -1) {
        printf("%d\n", result);
        } else {
        printf("Tidak ada mayoritas\n");
    }

    return 0;
}