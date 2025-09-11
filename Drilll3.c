/*Get a string from the user max of 20 characters count the number of vowels (case sensitive).Print the string in uppercase.*/


#include <stdio.h>
#include <ctype.h>

int main() {
    char Character[21];
    int vowelCount = 0;
    

    printf("Enter a string (max 20 characters, no spaces): ");
    scanf("%20s", Character);
    
    
    for (int i = 0; Character[i] != '\0'; i++) {
        if (Character[i] == 'a' || Character[i] == 'e' || Character[i] == 'i' || Character[i] == 'o' || Character[i] == 'u' ||
            Character[i] == 'A' || Character[i] == 'E' || Character[i] == 'I' || Character[i] == 'O' || Character[i] == 'U') {
            vowelCount++;
        }
    }
    

    printf("Vowel count: %d\n", vowelCount);
    

    for (int i = 0; Character[i] != '\0'; i++) {
        Character[i] = toupper(Character[i]);
    }
    

    printf("Uppercase string: %s\n", Character);
    
    return 0;
}
