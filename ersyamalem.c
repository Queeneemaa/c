#include <stdio.h>
#include <string.h>

int main() {
    int X;
    scanf ("%d", &X);

    for (int i = 0; i < X; i++) {
        char s[12];
        scanf ("%s", s);
        
        int r =  strlen (s);
        int ispolindrom = 1;
        for (int j = 0; j < r; j++){
            if (s [j] != s[r-1-j]){
                ispolindrom = 0;
            }

        }
        if (ispolindrom == 1){
            printf ("Kyaa~~\n");
        }
        else printf ("Tcuih!\n");
    }
    return 0;
}