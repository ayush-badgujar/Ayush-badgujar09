#include<stdio.h>
void main()
{
	int array1[5],array2[5];
	int i;
	printf("Enter the Array 1\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array1[i]);
	
	}
	printf("Enter the Array 2\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array2[i]);
	}
	printf("Array 1 :\n");
	
	for (i=0;i<5;i++)
	{
		printf("%d\t",array1[i]);
		
	}
	printf("\nArray 2 :\n");
	
	for (i=0;i<5;i++)
	{
		printf("%d\t",array2[i]);
		
	}
	 printf("\nAddition of 2 array : \n");
	for (i=0;i<5;i++)
	{ 
	printf("%d\t",array1[i]+array2[i]);
	}
}