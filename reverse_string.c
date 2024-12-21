#include <stdio.h>

int main() {
    char str[101];  // Maksimum panjang string adalah 100
    scanf("%s", str);

    // Menghitung panjang string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Membalikkan string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Menampilkan string yang sudah dibalikkan
    printf("%s\n", str);

    return 0;
}
