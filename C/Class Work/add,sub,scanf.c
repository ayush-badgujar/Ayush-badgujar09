#include<stdio.h>
 void main()
  {
  	int  A,B;
  	
  	printf("\n\xB2\xB2\xb2\xB2\xB2\xb2\xB2  Calculator \xB2\xb2\xB2\xB2\xb2");
  	printf("Entre the value A : ");
  	scanf("%d",&A);
  	printf("Entre the value B :");
  	scanf("%d",&B);
  	printf("\nA = %d,\t B=%d\n",A,B);
  	
  	printf("\nAdditions : %d",(A+B));
  	printf("\nSubtraction : %d",(A-B));
  	printf("\nMultiplication: %d",(A*B));
  	printf("\nDivision : %.3f",((float)A/B));
  }