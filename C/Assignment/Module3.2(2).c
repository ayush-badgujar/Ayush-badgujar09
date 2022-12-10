#include<stdio.h>
#include<conio.h>

//WAP a program to find  simple intrest

void main()
{


	float p,rate,time,si ;
	printf("Enter principal amount: ");
	scanf("%f",&p);
	
	
	printf("Enter rate amount: ");
	scanf("%f",&rate);
	
	printf("Enter time period : ");
	scanf("%f",&time);
	si=(p*time*rate)/100; 
	
	printf("\nsimple Intrest =%2f",si);
	scanf("%f",&p);
}
	
 		