#include <cs50.h>
#include <stdio.h>

int main(void)

{
    //prompting user for height of pyramid//
    printf("Let's build a half-pyramid for Mario to climb. Pick a number, 1-23, to determine the height of your pyramid.\n");

    //declaring height variable, with integer range condition//
    int height;
    do
    {
        height = get_int();
    }
    
    while (height <= 0 || height >= 24);
     

    //outer loop, adding rows to pyramid up to user specified height//
    for (int row = 0; row < height; row++)
  
    {
        //inner loop printing spaces per row//
        for (int spaces = 0; spaces < height - row - 1; spaces++)
            {
                printf(" ");
            } 
        
        //inner loop printing hashes per row//       
        for (int hashes = 0; hashes < row + 2; hashes++)
            {
                printf("#");
            } 
        printf("\n");
    }
    
}    
