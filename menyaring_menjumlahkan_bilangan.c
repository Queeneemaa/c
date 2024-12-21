#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); 

        int total = 0; 

        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);

            if (num % 3 == 0 && num % 5 == 0) {
                total += num;
            }
        }

        printf("Kasus #%d: %d\n", t, total); 
    }

    return 0;
}
