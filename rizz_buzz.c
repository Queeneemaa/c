#include <stdio.h>
#define ull unsigned long long

unsigned long long rizz(ull int x)
{
    printf("Rizz");
    return 1;
}

unsigned long long hasAllComponents(ull a, ull b)
{
    return ((a | b) == a || (a | b) == b);
}

unsigned long long isDivisible(ull a, ull b) {
    return (a % b == 0) || (b % a == 0);
}

int main() {
    unsigned long long A, B;
    scanf("%llu %llu", &A, &B);

    if (isDivisible(A, B) || isDivisible (B, A))
    { rizz(A);
        if (hasAllComponents(A, B) || hasAllComponents(B, A)) {
            printf("Buzz\n");
        } else if (!(A & B)) {
            printf("Wuzz\n");
        }
    } else {
        printf("Not Rizz");
        if (hasAllComponents(A, B) || hasAllComponents(B, A)){
            printf(", but buzz!");
        }
        else if (!(A & B)) {
            printf(", but Wuzz!");
        }
    }

    return 0;
}
