#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    string s = "paing";

    printf("%i %i %i\n", (int)c1,(int) c2,(int) c3);

    printf("%i %i %i %i %i %i\n", s[0], s[1], s[2], s[3], s[4], s[5]);  // s[5] = 0 -> NUL
}