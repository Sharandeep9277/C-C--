/*take a charecter in upper case then print in lower case*/
#include<stdio.h>
int main()
{
    char letter,smallLetter;
    printf("enter a Caps Letter \n");
    scanf("%c",&letter);

    smallLetter = (int)letter + 32;
    
    printf("The Small Letter is %c\n",(char)smallLetter);

    return 0;

}