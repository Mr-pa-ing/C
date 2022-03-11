#include <stdio.h>

void memow(int n);

int main(void)
{
   memow(5);
}

void memow(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Memow\n");
    }
}