#include <stdio.h>
#include <string.h>

int main() {
    char c[1000];
    scanf("%[^\n]s",c); 

    int x =  strlen (c);
    int ispolindrom = 1;
    int y = 0;
    int z = x-1;
    
    while(y<z){

        while ((c[y] < 65 || c[y] > 122) || (c[y] > 90 && c[y] < 97)){
            y++;
        }

        while ((c[z] < 65 || c[z] > 122) || (c[z] > 90 && c[z] < 97)){
            z--;
        }
        
        if(y >= z) break;
        
        if (c[y] >= 'a' && c[y] <= 'z') {
            c[y] = c[y] - 'a' + 'A';
        }

        if (c[z] >= 'a' && c[z] <= 'z') {
            c[z] = c[z] - 'a' + 'A';
        }
        if (c[y] != c[z]){
            ispolindrom = 0;
        }
        z--;
        y++;
    }
    
    if (ispolindrom == 1){
        printf ("Pertanda baik nich!");
    }
    else {
        printf ("Net not! Jangan dilanjutin");
    }
}
