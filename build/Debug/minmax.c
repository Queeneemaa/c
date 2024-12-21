#include <stdio.h>

int main(){
	int a[100], b, i, terbesar, terkecil;
	
	//b adalah banyaknya angka dalam array
	scanf("%d", &b);
	
	for(i = 0; i < b; i++){
		scanf("%d", &a[i]); //Input array
	}
	
	terbesar = a[0];
	for(i = 0; i < b; i++){
		if(a[i] > terbesar){
			terbesar = a[i];
		}
	}
	
	terkecil = a[0];
	for(i = 0; i < b; i++){
		if(a[i] < terkecil){
			terkecil = a[i];
		}
	}
	
	printf("%d %d", terkecil, terbesar);
	
	return 0;
}
