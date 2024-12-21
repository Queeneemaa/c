#include <stdio.h>

int main(){
    int nilai;
    scanf ("%d", &nilai);

    if (nilai > 86){
        printf("A\n");}
    else if (nilai >= 76){
        printf("AB\n");}
    else if (nilai >= 66){
        printf("B\n");}
    else if (nilai >= 61){
        printf("BC\n");}
    else if (nilai >= 56){
        printf("C\n");}
    else if (nilai >= 41){
        printf("D\n");}
    else if (nilai >= 0){
        printf("E\n");}
    else{
    printf(" ");}


return 0;

}

