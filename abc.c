#include <stdio.h>
#include <string.h>

int main (){
    int i;
    char f[101];
    scanf("%s",f);

    for (int i =strlen(f) - 1; i >= 0; i--)
    {
        printf("%c", f[i]);
    }
}