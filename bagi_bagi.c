#include <stdio.h>

int largestNumber(long long int a, long long int b) {
    while (b != 0) {
        int sum = b;
        b = a % b;
        a = sum;
    }
    return a;
}

int countDigits(long long int k) {
    int count = 0;
    while (k > 0) {
        k /= 10;
        count++;
    }
    return count;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int pembagiAngka = largestNumber(x, y);
    int jumlahDigit = countDigits(pembagiAngka);

    if (jumlahDigit % 2 == 0) { 
        printf("Yey brankas berhasil dibuka :D\n");
    } else {
        printf("Yah gagal :(\n");
    }

    return 0;
}