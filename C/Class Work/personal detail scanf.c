#include<stdio.h>
void main()

{
 int age;
 char name[20];
 float Salary;
 printf("PERSONAL DETAIL :");
 printf("\nEntre Your Name  :");
 scanf("%s",&name);
 //gets(name);
 printf("Entre Your Age :");
 scanf("%d",&age);
 printf("Entre your Salary :");
 scanf("%f",&Salary);
 
 printf("\nName is : %s",name);
 printf("\nAge is : %d",age);
 printf("\nSalary is : %.2f",Salary);
 
 	
}