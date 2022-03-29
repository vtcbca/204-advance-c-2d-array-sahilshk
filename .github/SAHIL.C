/*WRITE A MENU-DRIVEN PROGRAM TO PERFORM USING UDF:
AUTHOR : SHAIKH SAHIL.
DATE :  22-03-2022*/
#include<stdio.h>
#include<conio.h>
int menu();	//without arrgument
void sum();	//without arrgement
void pali(int,int);	//with & without arrgument
int arms();	//without any with returntype
int square series(int,int);	//with and with returntype
exit

void main()
{
	int a,b,c,d;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c):
		getch();
		{
		case 1:sum();
		break;

		void sum of digits()
		{
			int n,s,sum=0;
			clrscr();
			printf("n::");
			scanf("%d",&n);
			while(n>0)
			{
				s=n%10;
				sum=sum+s;
				n=n/10;
			}
			printf("sum of%d",sum);
			getch();
		}
		case 2:pali();
		break;

		void pali(int,int)
		{
			int n,n1,rev=0,rem;
			printf("Enter the any number:");
			scanf("%d",&n);
			n1=n;
			while(n>0)
			{
				rem=n%10;
				rev=rev+10+rem;
				n=n/10;
				{
					if(n1==rev)
					{
						printf("\n palindrome:");
					}
					else
					{
						printf("\n Not a palindrome:");
					}
					return n;
					}
				}
			}
			case 3:arms();
			d=arm();
			printf("arm is %d",d);
			break;







		int choise;
		printf("\n\nt\t MENU \n");
		printf("\n\t 1. SUM OF DIGITS:");
		printf("\n\t 2. PALINDROME:");
		printf("\n\t 3. ARMSTRONG:");
		printf("\n\t 4. SQUARE SERIES:");
		printf("\n\t\t ENTER THE CHOISE:");
		scanf("%d",&choise);
		return choise;





