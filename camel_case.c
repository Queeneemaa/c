#include <stdio.h>
#include <string.h>

int main() {
    char snake_case[101];
    printf("Masukkan nama variabel dalam bentuk snake_case: ");
    fgets(snake_case, sizeof(snake_case), stdin);

    int len = strlen(snake_case);
    char camelCase[101];
    int j = 0;
    int capitalize = 0;

    for (int i = 0; i < len; i++) {
        char current = snake_case[i];

        if (current == '_') {
            capitalize = 1;
        } else {
            if (capitalize) {
                camelCase[j] = toupper(current);
                capitalize = 0;
            } else {
                camelCase[j] = current;
            }
            j++;
        }
    }

    camelCase[j] = '\0';

    printf("Nama variabel dalam bentuk camelCase: %s\n", camelCase);

    return 0;
}
