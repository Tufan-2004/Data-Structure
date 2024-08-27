#include<stdio.h>
#include<conio.h>
void add();
void sub();
void multi();
void div();
int main()
{
	add();
	sub();
	multi();
	div();
    getch();
    return(0);
}
void add() //funtion declaration
{
	int x,y,sum;
	//x=10;
	//y=5;
	printf("\nEnter value for x=");
	scanf("%d",&x);
	printf("\nEnter value for y=");
	scanf("%d",&y);
	sum=x+y;
	printf("\nThe addition of two numbers=%d",sum);
}
void sub() //funtion declaration
{
	int x,y,sub;
	//x=10;
	//y=5;
	printf("\nEnter value for x=");
	scanf("%d",&x);
	printf("\nEnter value for y=");
	scanf("%d",&y);
	sub=x-y;
	printf("\nThe subtraction of two numbers=%d",sub);
}
void multi() //funtion declaration
{
	int x,y,multi;
	//x=10;
	//y=5;
	printf("\nEnter value for x=");
	scanf("%d",&x);
	printf("\nEnter value for y=");
	scanf("%d",&y);
	multi=x*y;
	printf("\nThe multiplication of two numbers=%d",multi);
}
void div() //funtion declaration
{
	int x,y,div;
	//x=10;
	//y=5;
	printf("\nEnter value for x=");
	scanf("%d",&x);
	printf("\nEnter value for y=");
	scanf("%d",&y);
	div=x/y;
	printf("\nThe division of two numbers=%d",div);
}