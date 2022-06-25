#include <stdio.h>

    /* printing out the Fahrenheit-Celsius table  */

main()
{   // In C all variables must be declared before they are used, this is called Declaration
    int fahr, celsius; 
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20; 
    fahr = lower;
    
    while (fahr <= upper ) // Where the condition lies 
    {
        /* code block which is excuted upon true condition */
        celsius = 5 * (fahr-32) / 9;
    }
    
    return 0;

}
