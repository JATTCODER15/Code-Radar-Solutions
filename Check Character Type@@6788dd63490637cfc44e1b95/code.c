// Your code here...
#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    // Check for vowels (both uppercase and lowercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check for consonants (alphabets excluding vowels)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    }
    // Check for digits
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // If not a letter or digit, it's a special character
    else {
        printf("Special Character\n");
    }
    return 0;
}
