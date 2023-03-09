#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, value;
    printf("Enter a number: ");
    scanf("%d %d", &number, &value);
    printf(!(number % value) ? "The number is strong" : "The number is weak");
    return 0;
}
