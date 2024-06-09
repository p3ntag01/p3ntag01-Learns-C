#include <stdio.h>

int main()
{
    float length ,  breadth , area ; // We need vars with precision 

    printf("Enter the Length of Rectangle \n>>>"); 
    scanf("%f",&length);    // Normally after this Statement there shouldnt be a newline
    printf("Enther the Breadth of Rectangle \n>>>"); // Remember the stdin and stdout thing we learnt about.

    /*
    The input we enter in the scanf statement takes 2 inputs instead of 1

        stdout = "<our vairable> + <\n from our enter command>"
        so the var gets taken to the %f variable
        and the /n gets flushed in our output as new line
        This is an accidental prefection.
    */
    scanf("%f",&breadth);

    area = length * breadth ;

    printf("The area of rectangle is %f\n",area);

    

}