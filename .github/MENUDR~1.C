/*Write a Progra Menu-Driven Program To Perform Using UDF:
Author : Shaikh Sahil.
Date : 22-03-2022.*/
#include<stdio.h>
#include<conio.h>

int menu();
void sod();
void pel(int);
int arm();
void sqs(int);

void main()
{
	int a,b,d,m;
	char inp;
	clrscr();
	do
	{
		m=menu();
		switch(m)
		{
			case 1:
				sod();
				break;
			case 2:
				clrscr();
				printf("\n\t\t Pelindrome Number");
				printf("\n\n\t Enter a Number : ");
				scanf("%d",&a);
				pel(a);
				break;
			case 3:
				b=arm();
				if(b==1)
					printf("\n\t is ArmStrong");
				else
					printf("\n\t is Not ArmStrong");
				getch();
				break;
			case 4:
				clrscr();
				printf("\n\t\t Square Series");
				printf("\n\n\t Enter a Number : ");
				scanf("%d",&d);
				sqs(d);
				break;
			case 5:
				exit(0);
			default:
				printf("Enter Valid Choice : ");
		}
		flushall();
		clrscr();
		printf("\nDo You Want to Continue ? \n\t( Yes = Y or y ) : ");
		scanf("%c",&inp);
		clrscr();
	}while(inp == 'Y' || inp == 'y');

}


int menu()
{
	int c;
	printf("\n\t\t\t --Menu-- \n");
	printf("\n-------------------------------------------------------");
	printf("\n \t1 : Sum Of Digits ");
	printf("\n \t2 : Pelindrome    ");
	printf("\n \t3 : ArmStrong     ");
	printf("\n \t4 : Square Series ");
	printf("\n \t5 : Exit          ");
	printf("\n-------------------------------------------------------");
	printf("\n\t   Enter Your Choice : ");
	scanf("%d",&c);
	return c;
}


//Sum of Digits

void sod()
{
	int n,m,sum=0,r;
	clrscr();
	printf("\n\t\t Sum of Digits");
	printf("\n\tEnter A Value : ");
	scanf("%d",&n);
	m = n;
	while(n>0)
	{
		r=n%10;
		sum = sum + r;
		n = n/10;
	}
	printf("\n\n\t The Sum of %d is %d",m,sum);
	getch();
}

void pel(int x)
{
	int a,sum=0,r;
	a = x;
	while(x>0)
	{
		r = x%10;
		sum = (sum * 10) + r;
		x = x/10;
	}
	if(sum == a)
		printf("\n\t is Pelindrome");
	else
		printf("\n\t is Not Pelindrome");
	getch();
}

int arm()
{
	int a,b,sum=0,r;
	clrscr();
	printf("\n\t\t Armstrong Number ");
	printf("\n\n\t Enter a Number : ");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		r = a%10;
		sum = sum + (r*r*r);
		a = a/10;
	}
	if(b == sum)
		b=1;
	else
		b=0;
	return b;
}
void sqs(int x)
{
	int i,y,sum=0;
	clrscr();
	printf("Series of %d Numbers is : \n\tSeries = ",x);
	for(i=1;i<=x;i++)
	{
		sum = i * i;
		printf(", %d",sum);
	}
	getch();
}
