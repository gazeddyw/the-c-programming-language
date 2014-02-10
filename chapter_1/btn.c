
/*
 * Count number of blanks, tabs and newlines in input
 */

#include <stdio.h>

int main()
{
        int c;
        int blanks = 0;
        int tabs   = 0;
        int nl     = 0;
        
        while ((c = getchar()) != EOF) {
                if (c == ' ')
                        ++blanks;
                else if (c == '\t')
                        ++tabs;
                else if (c == '\n')
                        ++nl;
        }
        
        printf("  Blanks: %d\n", blanks);
        printf("    Tabs: %d\n", tabs);
        printf("Newlines: %d\n", nl);
        return 0;
}
