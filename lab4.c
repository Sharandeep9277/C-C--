/*Write a programm to enter a charecrer and then determinate wheathwe is vowel or not usinf switch-case */
#include<stdio.h>
int main() 
{
    char value;
    printf("Enter a char\n");
    scanf("%c", &value);

    switch (value)
    {
        case 'a' :
            printf("The letter is vowel");
            break;
        case 'e' :
            printf("The letter is vowel");
            break;
        case 'i' :
            printf("The letter is vowel");
            break;
        case 'o' :
            printf("The letter is vowel");
            break;
        case 'u' :
            printf("The letter is vowel");
            break;
        case 'A' :
            printf("The letter is vowel");
            break;
        case 'E' :
            printf("The letter is vowel");
            break;
        case 'I' :
            printf("The letter is vowel");
            break;
        case 'O' :
            printf("The letter is vowel");
            break;
        case 'U' :
            printf("The letter is vowel");
            break;
        
        default:
            printf("Is not a vowel");
    }
    return 0;

}