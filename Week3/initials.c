#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string name = get_string("Name: ");
    char initials[4];
    int counter = 0;
    //iterate over the characters in the user's name
    for (int i = 0; i < strlen(name); i++)
    {
        if(isupper(name[i]))
        {
            //if...store data
            initials[counter] = name[i];
            counter++;
        }
    }

        //null character, end of array
        initials[counter] = '\0';
        printf("%s\n", initials);
}
