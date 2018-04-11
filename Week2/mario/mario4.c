#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for a positive number
    int n;ls
    do
    {
        // eprintf("about to prompt user for a number\n")
        n = get_int("Positive Number: ");
    }
    while(n <= 0);

    //Print this many rows
    for(int i = 0; i < n; i++)
    {
        //print out this many columns
        for(int j = 0; j < n; j++)
        {
            printf("#");
    }
    printf("\n");
    }
}