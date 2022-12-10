#include<stdio.h>
void main()
{
	
	int arr1[5];
	int i;
	printf ("\Enter the Array 1 Element : ");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr1[i]);
	}
	printf("\n\nArray 1 element are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t", arr1[i]);
	}
}