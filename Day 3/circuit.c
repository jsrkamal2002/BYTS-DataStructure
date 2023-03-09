#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int circuitState;
    printf("Enter the circuit state: ");
    scanf("%d", &circuitState);
    switch (circuitState)
    {
    case 1:
        printf("Circuit is open");
        break;
    case 2:
        printf("Circuit is closed");
        break;
    default:
        printf("Invalid Circuit State");
        break;
    }
    return 0;
}
