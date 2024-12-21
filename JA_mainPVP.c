#include <stdio.h>

struct Player {
    int HP;
    int ATK;
};

int main() {
    struct Player player1, player2;
    scanf("%d %d", &player1.HP, &player1.ATK);
    scanf("%d %d", &player2.HP, &player2.ATK);

    while (player1.HP > 0 && player2.HP > 0) {
        player2.HP -= player1.ATK;

        if (player2.HP <= 0) {
            printf("player 1 menang dengan sisa nyawa = %d. GGWP!\n", player1.HP);
            break;
        }

        player1.HP -= player2.ATK;

        if (player1.HP <= 0) {
            printf("player 2 menang dengan sisa nyawa = %d. Jago banget!\n", player2.HP);
            break;
        }
    }

    return 0;
}
