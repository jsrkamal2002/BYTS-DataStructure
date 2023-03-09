#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    /* code */
    char signal;
    printf("Enter the signal: ");
    scanf("%c", &signal);
    switch (toupper(signal))
    {
    case 'R':
        /* code */
        printf("Stop");
        break;
    case 'G':
        /* code */
        printf("Go");
        break;
    case 'Y':
        /* code */
        printf("Ready");
        break;
    default:
        printf("Invalid Signal");
        break;
    }
    return 0;
}
