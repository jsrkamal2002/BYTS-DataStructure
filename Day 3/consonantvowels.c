#include <stdio.h>

int main(int argc, char const *argv[])
{
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char vowel[5];
    char consonant[21];
    int v = 0, c = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 'a' || alphabet[i] == 'e' || alphabet[i] == 'i' || alphabet[i] == 'o' || alphabet[i] == 'u')
        {
            vowel[v++] = alphabet[i];
        }
        else
        {
            consonant[c++] = alphabet[i];
        }
    }
    printf("Vowels: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", vowel[i]);
    }
    printf("\n Constants: ");
    for (int i = 0; i < 21; i++)
    {
        printf("%c ", consonant[i]);
    }
    return 0;
}
