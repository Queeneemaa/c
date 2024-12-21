#include <stdio.h>

int main() {
    int N, S;
    scanf("%d", &N); 
    int arr[N];

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &S); 

    
    int found = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == S) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    // Jika tidak ditemukan, cetak -1
    if (!found) {
        printf("-1\n");
    }

    return 0;
}
