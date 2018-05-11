    #include <cs50.h>
    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdlib.h>

    int main(void)
    {
        string s = get_string("Name: ");

        printf("hello, %s\n", s);
    }

    {
            //get a string
            char *s = get_string("string: ");
            if(!s)
            return 1;
    }

            //print string, one character per line
            for(int i = 0, n = strlen(s); i < n; i++)
            {
                printf("%c\n", s[i]);
            }
            return 0;
            }