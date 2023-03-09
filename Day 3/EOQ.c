#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    long int ac, co, cc;
    ac = 20000;
    co = 10;
    cc = 5;
    printf("The EOQ is %f", sqrt((2 * ac * co) / cc));
    return 0;
}
