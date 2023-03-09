#include <stdio.h>
// will not workin gcc.
int main()
{
    char line[] = "welcome to the language of c programming";
    char string[5], string2[5], string3[5];
    sscanf(line, "%*s %*s %s %*s %*s %s %s", string, string2, string3);
    printf("%s %s %s", string, string2, string3);
    return 0;
}