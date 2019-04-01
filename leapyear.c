#include <stdio.h> //libraries
#include <cs50.h>
#include <math.h>

int main (void)
{
    int year; //declaring integer year
    do
    {
        year = get_int("What year after 0 A.D. do you want to check for being a leap year: "); //prompting for input of year value, could also include declarion of year in this line instead
        printf("\n");
    }
    while (year <= 0); //do while loop ensures that user keeps being prompted until a year greater than 0 is inputted

    //bool variable only capable of storing one of two values: 'true' or 'false'.

    bool condition1 = (year % 4) == 0; //declaring bool value of true. condition for leap year that says a leap year must be divisible by 4 to be a leap year
    bool condition2 = (year % 100) != 0; //declaring bool value of true. condition for leap year that a leap year must not be divisible by 100

    if(condition1 && condition2) //if condition1 and condition2 are true... property of '&&'
    {
        printf("%d is a leap year!\n", year); //basic print statement with integer value
    }
    else //otherwise, under any other possibility
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0; //exits code safely

}