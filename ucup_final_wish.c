#include <stdio.h>

void calculate(int n, int arr[]) {
    int first_difference = (arr[1] - arr[0]);
    int second_difference = (arr[2] - arr[1]) - (arr[1] - arr[0]);
    int third_difference = ((arr[3] - arr[2]) - (arr[2] - arr[1])) - ((arr[2] - arr[1]) - (arr[1] - arr[0]));
    int fourth_difference = (((arr[4] - arr[3]) - (arr[3] - arr[2])) - ((arr[3] - arr[2]) - (arr[2] - arr[1]))) - (((arr[3] - arr[2]) - (arr[2] - arr[1])) - ((arr[2] - arr[1]) - (arr[1] - arr[0])));

    if (n == 1) {
        printf("%d", arr[0]);
    } else if (n == 2) {
        printf("%d", 2 * arr[1] - arr[0]);
    } else if (n == 3) {
        printf("%d", arr[0] + 3 * first_difference + 3 * second_difference);
    } else if (n == 4) {
        printf("%d", arr[0] + 4 * first_difference + 6 * second_difference + 4 * third_difference);
    } else if (n == 5) {
        printf("%d", arr[0] + 5 * first_difference + 10 * second_difference + 10 * third_difference + 5 * fourth_difference);
    }
}

int main() {
    int n;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculate(n, arr);

    return 0;
}
