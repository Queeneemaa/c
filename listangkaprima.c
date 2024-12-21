int Prima(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2;i* i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

   
    for (int i = A; i <= B; i++) {
        if (Prima(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}