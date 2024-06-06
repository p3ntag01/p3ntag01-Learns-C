#include <stdio.h>

int main()
{
    char a,b,c;
    printf("Today we see some char bullshit\n");

    printf("Lets take first input\n");
    scanf(" %c",&a);                     

    printf("The Second input\n");
    scanf(" %c",&b);                       //We need spaces before %c in scanf after taking a input
                                           
    printf("The third input\n");           //You Gotta Google it yourself and see it for yourself to understand
    scanf( "%c",&c);                       //This weird behaviour is linked to the stdin and stdout working of stdio.h library    
    printf("Lets see if this works or not\n");      //It does work now :)

    printf("The chars are %c %c %c",a,b,c);
}