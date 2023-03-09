# BYTS Day 3 question & answer.

1. Amar and vimal are friends living in the same street with door no 10 and 20 respectively. They went for a walk on a stromy night. They missed their ways & got lost with each of their door no respectively. Help them to reach their home using a programing language.
1. Lisa is a student who comes across a traffic signal on her way to college.Help her with possible combination with to cross the traffic signal.
1. Deepak is a plumber who fixes up some repairs on a tank. water keeps leaking from the spherical tank.As a result the tank has become half empty he wants to assess the maximum capacity of the tank.how can he do it?

---

Answer

Qn 1:

```c
#include <stdio.h>

void swap(int *amar, int *vimal)
{
    *vimal = *vimal + *amar;
    *amar = *vimal - *amar;
    *vimal = *vimal - *amar;
}

int main(int argc, char const *argv[])
{
    /* code */
    int doorNoAmar = 20, doorNoVimal = 10;
    printf("Enter Door No. of Amar : ");
    scanf("%d", &doorNoAmar);
    printf("Enter Door No. of Vimal : ");
    scanf("%d", &doorNoVimal);
    swap(&doorNoAmar, &doorNoVimal);
    printf("Orginal Door No. of Amar is %d\n", doorNoAmar);
    printf("Orginal Door No. of Vimal is %d", doorNoVimal);
    return 0;
}
```

Qn 2:

```c
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
        printf("Stop");
        break;
    case 'G':
        printf("Go");
        break;
    case 'Y':
        printf("Ready");
        break;
    default:
        printf("Invalid Signal");
        break;
    }
    return 0;
}
```

---

Bonus :

- Circuit Qn

```c
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
```
