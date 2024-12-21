#include<stdio.h>

int pangkat(unsigned long long a, unsigned long long b){
    if (b==1) return a;
    else return a * pangkat(a, b-1);
}

int tambah (unsigned long long c, unsigned long long d, unsigned long long e){
    int hasil = 0;
    for(int i = c; i<=d; i++){
        hasil += pangkat(i, e);
    }
    return hasil;
}

unsigned long long modulo = (10000000007);

int main(){
    unsigned long long L, M;
    unsigned int K;
    scanf("%llu %llu %u", &L, &M, &K);
    printf("%llu", tambah(M, K, L)% modulo);
    
}