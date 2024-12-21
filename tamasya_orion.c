#include <stdio.h>
struct barang {
    int id;
    char nama[100];
    long long int harga;
    int kualitas;
};

int main(){
    int n;
    scanf("%d", &n);
    struct barang barang[n];
    for (int i = 0; i<n; i++){
    scanf("%d %s %lld %d", &barang[i].id, barang[i].nama, &barang[i].harga, &barang[i].kualitas);
    }

    struct barang price = barang[0];
    struct barang quality = barang[0];

    for (int i = 0; i < n; i++)
    {
        if((barang[i].harga<price.harga) || ((barang[i].harga==price.harga)&&(barang[i].id<price.id)))price = barang[i];
    }
    for (int i = 0; i < n; i++)
    {
        if((barang[i].kualitas>quality.kualitas) || ((barang[i].kualitas==quality.kualitas)&&(barang[i].id<quality.id)))quality = barang[i];
    }

    printf("Best item for price is: %d %s %lld %d\n", price.id, price.nama, price.harga, price.kualitas);    
    printf("Best item for quality is : %d %s %lld %d\n", quality.id, quality.nama, quality.harga, quality.kualitas);    

}