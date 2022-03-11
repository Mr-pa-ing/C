#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
    float regular = get_float("Regular price: ");
    int percentage = get_int("Discount percentage: ");
    float sale = discount(regular, percentage);
    printf("Discount: %.2f\n", sale);
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}