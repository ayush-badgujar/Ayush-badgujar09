#include<stdio.h>
void main()
{
	char ch;
printf("\nEnter the character ?");
scanf("%c",&ch);
/*switch(ch)
{
	case 'a,e,i,o,u' : printf("\nIt is a vowel");
	break;
	default :printf("\nIt is a consonant");
}*/
if (ch=='a'||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U') 
{
	printf("\n%c is a vowel",ch);
}
else 
	{ 
	printf("\n%c is a cons0nant",ch);
	}
}