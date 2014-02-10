
/*
 * Replace a series of blanks with a single blank
 */

#include <stdio.h>

int main()
{
        int c;
        int consecutive_blanks = 0;
        
        while ((c = getchar()) != EOF) {
                if (c == ' ')
                        ++consecutive_blanks;
                else if (c != ' ')
                        consecutive_blanks = 0;
                        
                if (consecutive_blanks > 1)
                        putchar('\0');
                else 
                        putchar(c);
        }
        
        return 0;
}
