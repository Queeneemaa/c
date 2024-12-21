#include <stdio.h>
 
int main()
{
    int is_armstrong;
    scanf("%d", &is_armstrong);
 
    if (is_armstrong / 10 == 0) {
        int satuan = is_armstrong;
        printf("Satuan = %d\n", satuan);
        printf("Armstrong\n");
    }
    else if (is_armstrong / 10 >= 1 && is_armstrong / 10 < 10) {
        int satuan = is_armstrong % 10;
        printf("Satuan = %d\n", satuan);
 
        int puluhan = (is_armstrong % 100) / 10;
        printf("Puluhan = %d\n", puluhan);
        int is_arm = satuan*satuan + puluhan*puluhan;
        if (is_arm == is_armstrong){
            printf("Armstrong\n");
        }else {
            printf("Bukan Euy\n");
        }
    }
    else {
        int satuan = is_armstrong % 10;
        printf("Satuan = %d\n", satuan);
 
        int puluhan = (is_armstrong % 100) / 10;
        printf("Puluhan = %d\n", puluhan);
 
        int ratusan = (is_armstrong / 100 );
        printf("Ratusan = %d\n", ratusan);
 
        int is_arm = satuan*satuan*satuan + puluhan*puluhan*puluhan + ratusan*ratusan*ratusan;
        printf("%d %d\n", is_armstrong, is_arm);
        if (is_arm == is_armstrong){
            printf("Armstrong\n");
        }else {
            printf("Bukan Euy\n");
        }
    }
}