/*Write a program of a employee structure which consists of 3 members
( Ename , Ecode, Esal ). Using this structure take 5 different
employees’ information then display all the information of all
employees after sorting all information according to salary in
ascending order.*/

#include<stdio.h>
#include<string.h>

struct employee{
    char name[30];
    int code;
    float salary;
}E[5];

int main(){
    struct employee E[5];
    float high;
    int i;
    for(int i=0;i<5;i++){
        printf("Enter The Name of Employee %d : ",i+1);
        scanf("%s",&E[i].name);
        //gets(E[i].name);
        //scanf("%[^\n]",E[i].name);
        printf("Enter The code of Employee %d \n: ",i+1);
        scanf("%d",&E[i].code);                                                     // Bishnudev Khutia
        printf("Enter The salary of Employee %d : \n",i+1);                        // CSE/20/020
        scanf("%f",&E[i].salary);
    }
    for(int i=0;i<5;i++){
        printf("The Name of Employee %d is %s\n",i+1,E[i].name);
        printf("The code of Employee %d is : %d\n",i+1,E[i].code);
        printf("The salary of Employee %d is %.1f : \n",i+1,E[i].salary);
    }
    high=E[0].salary;
     for(i=0;i<5;i++)
     {
          if(E[i].salary>high)
          high=E[i].salary;
     }
     printf("Highest salary employee details:");
     printf("\n-----------------------------\n");
     printf("NAME    CODE  SALARY\n");
     for(i=0;i<5;i++)
     {
          if(E[i].salary==high)
          printf("\n %s\t%d\t%.1f",E[i].name,E[i].code,E[i].salary);
     }
    
    return 0;
}