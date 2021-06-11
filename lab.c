/*Write a programm to enter a charecrer and then determinate wheathwe is vowel or not */
#include<stdio.h>
int main() 
{
    char value;
    printf("Enter a char\n");
    scanf("%c", &value);

    if (value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u' || value == 'A' || value == 'E' || value == 'I' || value == 'O' || value == 'U')
    printf("The Written char is vowel\n");
    else printf("Not a vowel");

    return 0;
}