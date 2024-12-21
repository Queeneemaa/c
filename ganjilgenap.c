#include <stdio.h>

int main() {
    int input;

    printf("Masukkan bilangan: ");
    scanf("%d", &input);

    if (input % 2 == 0) {
        printf("Genap\n");
    } else {
        printf("Ganjil\n");
    }

    return 0;
}
