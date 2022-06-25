#include <stdio.h> // includes information on the standard library 

int main() // this defines a function called main which has no arguements 
{
    // variable creation is done in two steps DECLARATION and INITIALIZATION
    int x;        // DECLARATION
    x = 123;      // INITIALIZATION
    int y = 1234; // DECLARATION + INITIALIZATION

    float gpa = 4.2;     // float
    char name = 'C';     // single character must be single quotes
    char test[] = "Oni\n"; // array of characters must be double quotes
    
    printf("This is %s", test);
    /*
    %c single character, %f for float, %d for number, %s and for string 
    */
    printf("This is %d", y);
    return 0;
}
