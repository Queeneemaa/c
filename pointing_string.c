#include <stdio.h>
#include <string.h>

int main(){
    char kode[50];

    scanf("%s", kode);
    int panjang = strlen(kode);

    int counter = 0;
    char *banding = kode;

    for(int i = 0; i < panjang; i++){
        printf("%c", *banding);

        banding += i + 1; //pointer
        counter += i + 1; //int

        if(counter > panjang){
            break;
        }
    }

    return 0;
}