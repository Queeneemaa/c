#include <stdio.h>

int main(){
double X,Y;
scanf ("%lf %lf", &X, &Y);
if (X == 0 && Y == 1)
{
    printf ("SEMUA SAMA");
}
else if (Y == 1 && X != 0)
{
    printf ("TIDAK MUNGKIN");
}
else
printf ("%.6lf", X / (1-Y));



}

