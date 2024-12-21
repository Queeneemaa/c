#include <stdio.h>

int countDaysNeeded(int weights[], int numberOfWeights, int energy) {
    int days = 0;
    int currentEnergy = 0;

    for (int i = 0; i < numberOfWeights; i++) {
        currentEnergy += weights[i];
        if (currentEnergy > energy) {
            days++;
            currentEnergy = weights[i];
        }
    }

    return days + 1;
}

int findMinEnergy(int weights[], int numberOfWeights, int requiredDays) {
    int left = 1;
    int right = 1000000;
    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int daysNeeded = countDaysNeeded(weights, numberOfWeights, mid);

        if (daysNeeded <= requiredDays) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int numberOfWeights, requiredDays;
    scanf("%d %d", &numberOfWeights, &requiredDays);

    int weights[numberOfWeights];
    for (int i = 0; i < numberOfWeights; i++) {
        scanf("%d", &weights[i]);
    }

    int minEnergy = findMinEnergy(weights, numberOfWeights, requiredDays);
    printf("%d\n", minEnergy);

    return 0;
}
