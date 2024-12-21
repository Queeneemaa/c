#include <stdio.h>

int main(){
    char a, b;
    scanf("%c %c", &a, &b);

    if (a=='I' && b=='I')
        { printf("2\n"); }
    

    else if (a=='I' && b=='V')
        { printf("4\n"); }


    else if (a=='V' && b=='I')
        { printf("6\n"); }
    

    else if (a=='I' && b=='X')
        { printf("9\n"); }
    

    else if (a=='X' && b=='I')
        { printf("11\n"); }
    
    else if (a=='X' && b=='V')
        { printf("15\n"); }
    
    else if (a=='X' && b=='X')
        {printf("20\n"); }
    
    else if (a=='X' &&b=='L')
        {printf("40\n"); }
    
    else if (a=='L' && b=='I')
        {printf("51\n"); }
    
    else if (a=='L' && b=='V')
        {printf("55\n"); }
    
    else if (a=='L' && b=='X')
        {printf("60\n"); }
    
    else if (a=='X' && b=='C')
        {printf("90\n"); }
    
    else if (a=='C' && b=='I')
        {printf("101\n"); }
    
    else if (a=='C' && b=='V')
        {printf("105\n"); }
    
    else if (a=='C' && b=='X')
        {printf("110\n"); }
    
    else if (a=='C' && b=='L')
        {printf("150\n"); }
    
    else if (a=='C' && b=='C')
        {printf("200\n"); }
    
    
else {
    printf("Ini bukan kode yang dimaksud :(");
}
    
return 0;
}