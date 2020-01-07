/*Algorithm for a basic check on a credit card validity */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    /*Retrieves the credit card number*/
    long int n = get_long("Number: ");
    long int m = n;
    int size = 0;
    
    /*Calculates the amount of numbers in the credit card number. This is used to create an array later*/
    while (n != 0)
    {
        n /= 10;
        size++;
        
    }
    
    if (size == 13 || size == 15 || size == 16)
    {
        
        /*Creates and array of digits from the credit card number (backwards, intentionally).*/
        int arr[size];
        int i = 0;
    
        while (i < size)
        {
            arr[i] = m % 10;
            m = (m - (m % 10)) / 10;
            i++;
        
        }
    
        /*This section develops the numerical answer to Luhn's Algorithm*/
        int ans = 0;
        for (int j = 0; j < size; j = j + 2)
        {
            ans = ans + arr[j];   
        }
    
    
        for (int g = 1; g < size; g = g + 2)
        {
            if ((2 * arr[g]) > 9)
                ans = ans + (1 + ((2 * arr[g]) % 10));
            else if ((2 * arr[g]) < 10)
                ans = ans + (2 * arr[g]);
            }
    
        if (ans % 10 == 0)
        {
            /*This section will print for VISA or AMERICAN EXPRESS card inputs respectively*/
            if (arr[(size - 1)] == 4)
            {
                printf("VISA\n");
            }
        
            else if (arr[(size-1)] == 3 && (arr[(size - 2)] == 4 || arr[(size - 2)] == 7))
            {
                printf("AMEX\n");
            }
        
            /*This section will print for any MASTERCARD inputs*/
            else if (arr[(size - 1)] == 5 && arr[(size - 2)] >= 1 && arr[(size - 2)] <= 5)
            {
                printf("MASTERCARD\n");
            }
        
            else
            {
                printf("UNKNOWN CARD\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }    
    else
    {
        printf("INVALID\n");                                          
    }                                     

}    
