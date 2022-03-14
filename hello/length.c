#include <cs50.h>
#include <stdio.h>

int length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int string_length = length(name);
    printf("%i\n", string_length);
}

int length(string s)
{
    int i = 0;

    while(s[i] != '\0')
    {
        i++;
    }

    return i;
}