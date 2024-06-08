#include <stdio.h>

int main()
{
    printf("Introducing our variable friends !\n");

    int integer;
    float floating;
    char character;

    integer = 20; //integer stores the integer value 
    floating = 3.1415 ;// the float stores the floating point numerical value
    character =  'a' ;// the char stores the character value

    printf("Our compiler now identifies them\n");
    printf("The int friend is %d\n",integer);
    printf("The float friend is %f\n",floating);
    printf("The char friend is %c\n",character);

    return 0;
}