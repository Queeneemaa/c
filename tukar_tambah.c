#include <stdio.h>
#include <string.h>

int findIndex(char handphone[10000][11], int N, char query[11]) {
    for (int i = 0; i < N; i++) {
        if (strcmp(handphone[i], query) == 0) {
            return i;
        }
    }
    return -1; 
}

void swap(char handphone[10000][11], int idx1, int idx2) {
    char temp[11];
    strcpy(temp, handphone[idx1]);
    strcpy(handphone[idx1], handphone[idx2]);
    strcpy(handphone[idx2], temp);
}

int main() {
    int N, M;
    scanf("%d", &N);
    char handphone[10000][11];

    for (int i = 0; i < N; i++) {
        scanf("%s", handphone[i]);
    }
    scanf("%d", &M);

    char mapping[10000][2][11];

    for (int i = 0; i < M; i++) {
        scanf("%s %s", mapping[i][0], mapping[i][1]);
    }

    for (int i = 0; i < M; i++) {
        int idx1 = findIndex(handphone, N, mapping[i][0]);
        int idx2 = findIndex(handphone, N, mapping[i][1]);

        if (idx1 != -1 && idx2 != -1) {
            swap(handphone, idx1, idx2);
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", handphone[i]);
    }

    return 0;
}
