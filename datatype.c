#include <stdio.h>

int main()
{
    float a;  // this is float , decimal stuff
    int b;  // this is int , basic numbers
    char ch; // this is char , a single character

    printf("Enter The value of float\n");
    scanf("%f", &a); // %f for float

    printf("\nEnter the value of int\n");
    scanf("%d", &b); // %d for int

    printf("\nEnter the value of char\n");
    scanf(" %c", &ch);  // char scanning is weird , it needs a whitespace before %c


    printf("\nValue of float: %f", a);
    printf("\nValue of int: %d",b);
    printf("\nValue of char: %c", ch);

    // Now we learn something speical 
    // Rounded value for float

    printf("\nValue of float (rounded): %2.f\n", a);

    return 0;  // dont forget whitespace


}