#include <stdio.h> //preprocessor
#define PI 3.14

int calculateArea(int radius) 
{
    return PI * radius * radius;
}

int main()
{
    int radius = 0;

    printf("Enter radius: ");

    scanf("%d", &radius);

    double area = calculateArea(radius);

    printf("Area: %.2f", area);
    
    return 0;
}

