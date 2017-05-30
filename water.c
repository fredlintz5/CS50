#include <cs50.h>
#include <stdio.h>

int main(void)

{
    printf("How many minutes did you spend in the shower today? ");
    
    int minutes;
    do 
    {
        minutes = get_int();
    }
    while (minutes < 0);
    
    int bottles = minutes * 12;
    
    if 
        (minutes == 0)
        printf("You stink, GO TAKE A SHOWER!\n");
        
    else if
        (minutes > 10)
        printf("%i minutes in the shower is equal to using %i gallons of water. HOW WASTEFUL!\n", minutes, bottles);
        
    else if
        (minutes <= 10 && minutes > 0)
        printf("%i minutes in the shower is equal to using %i gallons of water. Not too wasteful...\n", minutes, bottles);  
    
}
