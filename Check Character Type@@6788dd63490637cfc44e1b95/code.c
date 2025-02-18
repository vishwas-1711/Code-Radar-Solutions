#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if it's a vowel
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || 
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("%c is a vowel.\n", ch);
    }
    // Check if it's a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    }
    // Check if it's a digit
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // If none of the above, it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}

