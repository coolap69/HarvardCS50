#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    // get a string
    char *s = get_string("s: ");

    if(!s)
    {
        return 1;
    }

    //allocate memory for another string
    char *t = malloc((strlen(s) +1) * sizeof(char));
    if(!t)
    {
        return 1;
    }

    //copy string into memory
    for(int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    //capital first letter in copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    //print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    //free memory
    free(t);
    return 0;
    }
