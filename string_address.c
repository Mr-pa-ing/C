#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    char *p = &s[0];
    printf("%p\n", s);
    printf("%p\n", p);
    printf("-------------\n");

    char *c = "Pai";
    printf("%p\n", c);
    printf("%p\n", &c[0]);
    printf("%p\n", &c[1]);
    printf("%p\n", &c[2]);
    printf("%p\n", &c[3]);
}