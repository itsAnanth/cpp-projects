#include <stdio.h>
#include <stdbool.h>

char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
bool vowel_or_consonant(char a) {
    int i = 0;
    for (i; i < sizeof(vowels) / sizeof(vowels[0]); i++) {
        if (a == vowels[i]) return true;
    }
    return false;
}

int main() {
    char ch;
    printf("%s", "Enter your char:\n");
    scanf("%c", &ch);
    bool val = vowel_or_consonant(ch);
    if (val) printf("%s", "vowel\n");
    else printf("%s", "consonant\n");
}
