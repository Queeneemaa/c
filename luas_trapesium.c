#include <stdio.h>

int main (){
    int a, b, t;
    scanf ("%d %d %d", &a, &b, &t);

    int s;
    s = (a + b) * t;
    s = s/2;

    printf("%d", s);

    return 0;

}