/* Creates a pyramid of "#"s with height based on user input (1 - 8)*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = 0;
    
/*Initiates first question and eliminates Heights below 1 and above 8*/
    while (h < 1 || h > 8)
    {
        h = get_int("Height: ");
    }
    
/*Prints rows and collums, including spaces*/
    for (int c = 0; c < h; c++)
    {
            /*Prints the spaces before the left hand side of the blocks*/
            for (int j = h - c; j > 0; j--)
            {
                printf(" ");
            }
            
            for (int i = 0; i <= c; i++)
            {
                printf("#");
            }
    
            printf("  ");
        
            for (int i=0;i<=c;i++)
            {
                printf("#");
            }
            printf("\n");
            int i=c;
    }

}
