#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 

int main() {
    char ch;
    
    // Read a character from input
    scanf("%c", &ch);
    
    // Check if the character is an alphabet (either lowercase or uppercase)
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Print the ASCII value of the character
        printf("%d\n", ch);
    } else {
        // If the input is not an alphabet, print an error message
        printf("Input is not a valid alphabet character.\n");
    }

    return 0;
}
