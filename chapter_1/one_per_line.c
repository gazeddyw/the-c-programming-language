
/*
 * Count lines, words, and characters in input
 */

#include <stdio.h>

#define YES 1
#define NO  0

int main()
{
        int c;
        int newline = NO;
        
        while ((c = getchar()) != EOF) {
                if (c != ' ' && c != '\n' && c != '\t') {
                        putchar(c);
                        newline = NO;
                }
                else if ((c == ' ' || c == '\n' || c == '\t')
                            && (newline == NO)) {
                        putchar('\n');
                        newline = YES;
                }
        }
        return 0;
}
