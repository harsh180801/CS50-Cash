#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int cents_owed;

    // ask the user for change
    //convert it into a readable number

    do
    {
        float dollars_owed = get_float("Change owed: ");
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);

    //keep dividing the number with the coin value, largest first
    //take the remainder and divide it with the lower coin value till it ends.

    int quarters = cents_owed / 25;
    int dimes = (cents_owed % 25) / 10;
    int nickels = ((cents_owed % 25) % 10) / 5;
    int pennies = ((cents_owed % 25) % 10) % 5;

    printf("%d \n", quarters + dimes + nickels + pennies);
}
