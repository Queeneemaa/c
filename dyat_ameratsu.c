#include <stdio.h>
#include <string.h>

// Fungsi untuk menggabungkan angka dari scroll
int gabungAngka(char *scroll) {
    int panjang = strlen(scroll);
    int hasil = 0;
    
    for (int i = 0; i < panjang; i++) {
        if (scroll[i] >= '0' && scroll[i] <= '9') {
            hasil = hasil * 10 + (scroll[i] - '0');
        }
    }
    
    return hasil;
}

int main() {
    int N;
    scanf("%d", &N);

    char scrolls[N][301];
    
    // Membaca input scroll dan menyimpannya dalam array scrolls
    for (int i = 0; i < N; i++) {
        scanf("%s", scrolls[i]);
    }

    int countPasangan = 0;

    // Mengecek pasangan scroll
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int angka1 = gabungAngka(scrolls[i]);
            int angka2 = gabungAngka(scrolls[j]);

            // Mengecek kriteria pasangan scroll
            if (angka1 == angka2 && scrolls[i][strlen(scrolls[i]) - 1] != scrolls[j][strlen(scrolls[j]) - 1]) {
                countPasangan++;
            }
        }
    }

    // Menampilkan hasil
    if (countPasangan > 0) {
        printf("%d\n", countPasangan);
    } else {
        printf("Tidak ada scroll yang berpasangan, kamu juga ga berpasangan\n");
    }

    return 0;
}
