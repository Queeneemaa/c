#include <stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    float s;
    s = a+b+c+d+e;
    s=s/5;

    printf("%.2lf", s);

}