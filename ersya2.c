#include <stdio.h>

void calculateBanknotes(int total_amount) {
    int denominations[] = {250, 100, 50, 20, 10, 5};
    int num_denominations = 6;
    int i = 0;

    while (total_amount > 0 && i < num_denominations) {
        int count = total_amount / denominations[i];
        total_amount %= denominations[i];
        if (count > 0) {
            printf("%d lembar %d ribuan\n", count, denominations[i]);
        }
        i++;
    }

    if (total_amount != 0) {
        printf("Ersya Mengsedih :(\n");
    }
}

int main() {
    int total_amount;
    // Input total amount in thousands
    printf("Input: ");
    scanf("%d", &total_amount);

    // Calculate the number of banknotes for each denomination
    printf("Output:\n");
    calculateBanknotes(total_amount);

    return 0;
}
