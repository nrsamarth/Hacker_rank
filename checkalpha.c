#include <stdio.h>

int main() {
    char ch;
    
    // Read a character from input
    scanf("%c", &ch);
    
    // Check if the character is an alphabet (either lowercase or uppercase)
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            // If it's not a vowel, it's a consonant
            printf("Consonant\n");
        }
    } else {
        // If the input is not an alphabet, print "Not an alphabet"
        printf("Not an alphabet\n");
    }

    return 0;
}
