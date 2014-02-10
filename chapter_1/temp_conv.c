
/*
 * Print Fahrenheit-Celcius table for
 * fahr = 0, 20, ..., 300; floating-point version.
 */

#include <stdio.h>
#include <unistd.h>

#define LINE " ______________________________________________________\n"


int print_title(char mode)
{
        puts(LINE);
        puts("   A temperature converter from Fahrenheit to Celsius");
        puts(LINE);
        if (mode == 'f')
                printf("\tFahrenheit\tCelsius\n");
        else if (mode == 'c')
                printf("\tCelsius\t\tFahrenheit\n");
        
        return 0;
}

int print_fahr_to_celsius()
{
        float fahr, celsius;
        int lower, upper, step;
        
        lower = -100;   // lower limit of temperature table
        upper = 200;    // upper limit
        step = 20;      // step size
        
        fahr = lower;
        while (fahr <= upper) {
                celsius = (5.0/9.0) * (fahr - 32);
                printf("\t %5.0f \t-\t\b\b%8.1f\n", fahr, celsius);
                fahr += step;
        }
        return 0;
}

int print_celsius_to_fahr()
{
        float fahr, celsius;
        int lower, upper, step;
        
        lower = -100;   // lower limit of temperature table
        upper = 200;    // upper limit
        step = 20;      // step size
        
        celsius = lower;
        while (celsius <= upper) {
                fahr = ((9.0/5.0) * (celsius)) + 32;
                printf("\t %5.0f \t-\t\b\b%8.1f\n", celsius, fahr);
                celsius += step;
        }
        return 0;
}


int main(int argc, char *argv[])
{
        float fahr, celsius;
        int lower, upper, step;
        char choice;
    
        while ((choice = getopt(argc, argv, "fc")) != EOF) {       // colon signifies arguments must be passed to 'd' option
                switch (choice) {
                case 'f':
                        print_title(choice);
                        print_fahr_to_celsius();
                        break;
                case 'c':
                        print_title(choice);
                        print_celsius_to_fahr();
                        break;
                default:
                        fprintf(stderr, "Unknown option: '%s'\n", optarg);
                        return 1;
                }
        }        
        puts("");
        return 0;
}