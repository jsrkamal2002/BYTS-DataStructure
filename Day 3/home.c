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
