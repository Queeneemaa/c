#include <stdio.h>

int main() {
    double X, Y;
    scanf("%lf %lf", &X, &Y);

    if (Y == 0) {
        if (X == 0) {
            // Kedua termometer sudah sama
            printf("%.6lf\n", X);
        } else {
            // Tidak mungkin ada suhu yang sama jika perubahan suhu adalah 0
            printf("TIDAK MUNGKIN\n");
        }
    } else if (X >= 0 && Y > 0) {
        // Suhu pada termometer A bernilai 0 atau positif,
        // dan perubahan suhu pada termometer B positif
        double suhu_sama = X / (1 - Y);
        printf("%.6lf\n", suhu_sama);
    } else {
        // Tidak ada nilai suhu yang memenuhi
        printf("TIDAK MUNGKIN\n");
    }

    return 0;
}
