#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int nums[] = {6, 4, 3, 5, 8, 9, 0};

    for (int i = 0; i < 7; i++)
    {
        if(nums[i] == -1)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}