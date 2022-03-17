#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "paing";
    people[0].number = "+1-293-424-2444";

    people[1].name = "phyo";
    people[1].number = "+1-199-233-233";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "phyo") == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}