#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int organik[N];
    int nonOrganik[N];
    int countOrganik = 0;
    int countNonOrganik = 0;

    for (int i = 0; i < N; i++) {
        int Si;
        scanf("%d", &Si);

        if (Si % 2 == 0) {
            organik[countOrganik] = i + 1;
            countOrganik++;
        } else {
            nonOrganik[countNonOrganik] = i + 1;
            countNonOrganik++;
        }
    }

    if (countOrganik > 0) {
        for (int i = 0; i < countOrganik; i++) {
            printf("%d ", organik[i]);
        }
    } else {
        printf("Bersih banget bjir");
    }

    printf("\n");

    if (countNonOrganik > 0) {
        for (int i = 0; i < countNonOrganik; i++) {
            printf("%d ", nonOrganik[i]);
        }
    } else {
        printf("Bersih banget bjir");
    }

    return 0;
}
