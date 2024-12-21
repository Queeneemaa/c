#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    int counts[5] = {0}; // A/a, I/i, U/u, E/e, O/o

    scanf("%d", counts);
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < strlen(string); i++) {
        char ch = string[i];
        if (ch == 'A' || ch == 'a') {
            counts[0]++;
        } else if (ch == 'I' || ch == 'i') {
            counts[1]++;
        } else if (ch == 'U' || ch == 'u') {
            counts[2]++;
        } else if (ch == 'E' || ch == 'e') {
            counts[3]++;
        } else if (ch == 'O' || ch == 'o') {
            counts[4]++;
        }
    }

    printf("A/a : %d\n", counts[0]);
    printf("I/i : %d\n", counts[1]);
    printf("U/u : %d\n", counts[2]);
    printf("E/e : %d\n", counts[3]);
    printf("O/o : %d\n", counts[4]);

    return 0;
}
