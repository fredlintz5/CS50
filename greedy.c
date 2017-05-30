#include <cs50.h>
#include <stdio.h>


int main(void)

{
    printf("Provide a random dollar and cents amount for us to convert into the least amount of change needed: \n");
    
    //declare global variables being used//
    int coin_count;
    int total_cents;
    float amount;
    
    //ask user for input with limitation of positive float//
    do
    {
        amount = get_float();
    }
    
    while (amount <= 0);
    
    //declare starting coin count//
    coin_count = 0;
    
    //convert and display amount(float) into total_cents(int) with zero decimal places for easy division//
    total_cents = amount*100;

    
    while (total_cents % 25 > 0 && total_cents >= 25)
        {
            coin_count++;
            total_cents -= 25;
        }
   
    while (total_cents % 10 > 0 && total_cents >=10)
    
        {
            coin_count++;
            total_cents -= 10;
        }
    
    while (total_cents % 5 > 0 && total_cents >=5)
        {
            coin_count++;
            total_cents -= 5;
        }

    while (total_cents - 1 >= 0 && total_cents >= 0)
        {
            coin_count++;
            total_cents -= 1;
        }

    printf("The amount of coins necessary to evenly divide your amount is %i\n", coin_count);
    printf("The remaining total cents is %i\n", total_cents);

}
