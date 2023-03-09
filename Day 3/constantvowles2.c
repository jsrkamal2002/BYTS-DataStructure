#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch, vowel, consonant;
    printf("Enter a character: ");
    scanf("%d", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel %c", ch);
    }
    else
    {
        printf("Consonant %c", ch);
    }
    return 0;
}
