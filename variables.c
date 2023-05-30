#include <stdio.h>

// Variables Declaration
extern int a, b, c;
float f, g, h;


int main() {
    // Variables Definition
    int a, b, c;
    float f, g, h;

    //Variable Initialization
    a = 1;
    b = 34;
    c = a + b;

    f = -1.0;
    g = -34.0;
    h = f + g;

    printf("Value of sum is %d\n", c);
    printf("Value of sum is %f\n", h);
    return 0;
}