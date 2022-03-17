#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name[] = {"blamond", "alucard", "myia", "zilong", "client", "khufra", "altas"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(name[i], "altas") == 0)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}