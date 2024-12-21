#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Capricorn");
        break;

    case 2:
        printf("Aquarius");
        break;

    case 3:
        printf("Aries");
        break;

    case 4:
        printf("Taurus");
        break;

    case 5:
        printf("Gemini");
        break;

    case 6:
        printf("Cancer");
        break;

    case 7:
        printf("Leo");
        break;

    case 8:
        printf("Virgo");
        break;

    case 9:
        printf("Libra");
        break;

    case 10:
        printf("Scorpio");
        break;

    case 11:
        printf("Sagittarius");
        break;

    case 12:
        printf("Capricorn");
        break;

    default:
        printf("Input tidak valid");
        break;
    }
    
    return 0;
}