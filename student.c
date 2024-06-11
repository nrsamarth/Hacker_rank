#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char name[100];
    int age;
    float cgpa;
    char grade;

    // Reading input
    scanf("%s", name);
    scanf("%d", &age);
    scanf("%f", &cgpa);
    scanf(" %c", &grade); // Note the space before %c to consume any leftover newline character

    // Printing output
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa);
    printf("Grade: %c\n", grade);

    return 0;
}
