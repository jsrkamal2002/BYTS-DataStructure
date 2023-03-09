#include <stdio.h>
#define PI 3.14159

int main(int argc, char const *argv[])
{
    int radius;
    double volume;
    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);
    volume = PI * 4 / 3 * (radius * radius * radius);
    printf("The volume of the sphere is: %f", volume);
    return 0;
}
