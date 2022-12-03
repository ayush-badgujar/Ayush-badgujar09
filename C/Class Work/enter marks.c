#include<stdio.h>
void main()
{
	int Rollno,s1,s2,s3,tot;
	char name[10];
	float per;
	
	 printf("Enter name : ");
	 //get(name);
	 scanf("%s",&name);
	 printf("Enter Your Roll No : ");
	 scanf("%d",&Rollno);
	 printf("Enter Acc marks : ");
	 scanf("%d",&s1);
	 printf("Enter Stat marks : ");
	 scanf("%d",&s2);
	 printf("Enter Eco marks : ");
	 scanf("%d",&s3);
	 tot = s1+s2+s3;
	 per = (float)tot/3;
	 
	 printf("\nRoll No : %d",Rollno);
	 printf("\nName : %s",name);
	 printf("\n Total : %d",tot);
	 printf("\npercentage : %.2f",per);
	 
	 if(per>=75)
	 {
	 	printf("\nDistinction");
		  }	 
		  else if (per>=60)
		  {
		  	printf("\nFirst class");
		  }
		  else if (per>=50)
		  {
		  	printf("\nSecond class");
		  }
		  else if (per>=40)
		  {
		  	printf("\n Fail ");
		  }
	
	
	
}