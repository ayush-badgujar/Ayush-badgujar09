#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the A value :- ",a);
	scanf("%d",&a);
	
	printf("Enter the B value :- ",b);
	scanf("%d",&b);
	
	printf("Addition : %d\n",a+b);
	printf("Subtarction : %d\n",a-b);
	printf("Multiplications : %d\n",a*b);
	printf("Division : %.3f\n",(float)a/b);
}