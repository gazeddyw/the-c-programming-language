
/*
 * Count number of lines in input
 */

#include <stdio.h>

int main()
{
        int c;
        int nl = 0;
        
        while ((c = getchar()) != EOF)
                if (c == '\n')          // To count the number of lines, we
                        ++nl;           // just need to count the number of '\n'
                
        printf("%d\n", nl);
}
