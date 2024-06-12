#include <stdio.h>

int main() {
    int units;
    float bill;

    // Read the number of units consumed
    scanf("%d", &units);

    // Calculate the bill based on the units consumed
    if (units <= 200) {
        bill = units * 0.50;
    } else if (units <= 400) {
        bill = (units * 0.65) + 100;
    } else if (units <= 600) {
        bill = (units * 0.80) + 200;
    } else {
        bill = (units * 1.25) + 425;
    }

    // Print the electricity bill rounded to the nearest integer
    printf("Rs.%d\n", (int)(bill + 0.5));

    return 0;
}
