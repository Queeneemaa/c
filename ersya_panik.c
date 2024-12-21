#include <stdio.h>
#include <string.h>

void encryptPassword(char password[], int K) {
    int length = strlen(password);
    
    for (int i = 0; i < length; i++) {
        if (password[i] >= 'a' && password[i] <= 'z') {
            password[i] = 'a' + (password[i] - 'a' + K) % 26;
        }
    }
}

int main() {
    char password[101];
    int K;

    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; 

    scanf("%d", &K);

    encryptPassword(password, K);
    printf("%s\n", password);

    return 0;
}
