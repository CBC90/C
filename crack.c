/* Brute force crack password based on hash input */
#include <cs50.h>
#include <stdio.h>
#include <crypt.h>

int main(int argc, string argv[])
{
    /* Terminates program if input is less or more than one command word (plus ./caesar)*/
    if (argc != 2)
    {
        printf("Usage: ./caesar hash\n");
        return 1;
    }
    
    /* Saves the inputs under hash1 and salt. */
    string hash1 = argv[1];
    char salt[2];
    string hash2;
    for (i = 0; i < 2; i++)
    {
        salt[i] = argv[1][i];
    }
    
    /* Creates an array of all letters, lowercase and uppercase. The constant '39'adjusts for UPPERCASE. */
    char letters[52];
    int l = 0;
    while (l < 26)
    {
        letters[] = 97 + l;     
        l++;
    }
    while (l < 52)
    {
        letters[l] = 39 + l;
        l++;
    }
    
    /* Creates a brute password, iterating it's size (size) and its characters (upper and lower, i iterations). */
    char PW[2];
    PW[1] = 00;
    for (int i = 0; i < 52; i++)
    {
        PW[0] = letters[i];
        /* INSERT CHECK */
        
    }
    
    char PW[3];
    PW[2] = 00;
    for (int i = 0; i < 52; i++)
    {
        PW[0] = letters[i];
        for (int j = 0; j < 52; j++)
        {
            PW[1] = letters[j];
            /* INSERT CHECK */
        }
    }
    
    char PW[4];
    PW[3] = 00;
    for (int i = 0; i < 52; i++)
    {
        PW[0] = letters[i];
        for (int j = 0; j < 52; j++)
        {
            PW[1] = letters[j];
            for (int k = 0; k < 52; k++)
            {
                PW[2] = letters[k];
                /* INSERT CHECK */
            }
        }
    }
    char PW[5];
    PW[4] = 00;
    for (int i = 0; i < 52; i++)
    {
        PW[0] = letters[i];
        for (int j = 0; j < 52; j++)
        {
            PW[1] = letters[j];
            for (int k = 0; k < 52; k++)
            {
                PW[2] = letters[k];
                for (int l = 0; l < 52; l++)
                {
                    PW[3] = letters[l];
                    /* INSERT CHECK */
                }
            }
        }
    }
    char PW[6];
    PW[5] = 00;
    for (int i = 0; i < 52; i++)
    {
        PW[0] = letters[i];
        for (int j = 0; j < 52; j++)
        {
            PW[1] = letters[j];
            for (int k = 0; k < 52; k++)
            {
                PW[2] = letters[k];
                for (int l = 0; l < 52; l++)
                {
                    PW[3] = letters[l];
                    for (int m = 0; m < 52; m++)
                    {
                        PW[4] = letters[m];
                        /* INSERT CHECK */
                    }
                }
            }
        }
    }
    
    /* WORKS I believe. Let's try something more simple. */
    
    
    
    /* Attempt 2 */
    for (int size = 1; size < 6; size++)
    {
        char PW[size];
        PW[size+1] = 00;
    
        for (int i = 0; i < 52; i++)
        {
            PW[size - size] = letters[i];
            /* INSERT CHECK*/
            
            if (size > 1)
            {
                for (int j = 0; j < 52; j++)
                {
                    PW[size - size + 1] = letters[j];
                    
                    if (size > 2)
                    {
                        for (int k = 0; k < 52; k++)
                        {
                            PW[size - size + 2] = letters[k];
                            
                            if (size > 3)
                            {
                                for (int l = 0; l < 52; l++)
                                {
                                    PW[size - size + 3] = letters[l];
                            
                                    if (size > 4)
                                    {
                                        for (int m = 0; m < 52; m++)
                                        {
                                            PW[size - size + 3] = letters[m];
                            
                                        }
                                    }
                                }
                            }
                        }
                    }
                     
                }
            }
        }
    }
    /* End of attempt 2*/
    
    /* First attempt */
    for (int size = 1; size < 6 ; size++)
    {
        char PW[size+1];
        PW[size+1] = 00;
        
        /* Undercase. */
        for (int i = 0; i < 26; i++)
        {
            PW[j] = 97 + i;
            
            hash2 = crypt(PWs, salt);
            if (hash2 == hash1)
            {
                printf('%s\n', PWs);
                return 0;
            }
        }
        /* Uppercase. */
        for ( i = 0; i < 26; i++)
        {
            PW[j] = 65 + i;
            hash2 = crypt(PW, salt);
            if (hash2 == hash1)
            {
                printf('%s\n', PW);
                return 0;
            }
        }
        
        
    }
    /* End of first attempt. */
    
    /* Test 
    
    string hash = crypt("LOLA", "51");  
        
    printf("%s/n", hash); */
    
}
