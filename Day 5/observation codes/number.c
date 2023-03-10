#include <stdio.h>

int main()
{
    int x[10] = {3, 0, 8, 1, 12, 8, 9, 2, 13, 10};
    int a, b, c;
    a = ++x[2];
    b = x[2]++;
    c = x[a++];
    printf("%d %d %d", a, b, c);
    return 0;
}