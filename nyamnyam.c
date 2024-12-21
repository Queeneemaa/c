#include <stdio.h>

int main() {
int y;
int a;
scanf ("%d %d", &y, &a);
for (int i = 0; i < y; i++){
    int c;
    scanf ("%d", &c);
    if (i%2==1){
        c--;
}
    a = a-c;
}
if (a < 0 ){
    printf ("tidak");}
    else printf ("ya");


}