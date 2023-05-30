#include <stdio.h>

#define PIZZACOST 1.5
const char NEWLINE = '\n';

int main() {
    float costoPizza;
    float numberOfSlices = 3;
    costoPizza = numberOfSlices * PIZZACOST;

    printf("Total bill: %c %f", NEWLINE, costoPizza);
}