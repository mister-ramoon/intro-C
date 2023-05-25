#include <stdio.h>

enum weekDays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

enum deek {
    club = 0,
    diamond = 10,
    heart = 20,
    spades = 30
} card;

int main() {
    enum weekDays today;
    today = Tuesday;
    printf("Day %d", today+1);

    card = spades;
    printf("\nCard %d", card);
    printf("\nSize of variable card %d", sizeof(card));

    return 0;
}