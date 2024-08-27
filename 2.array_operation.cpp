#include<stdio.h>
#include<conio.h>
//creating an array
int arr[10];
int i,n=4;
void Insert();
void Traverse();
void Delete();
void Delete_Position();

void Insert() 
{
	for(i=0; i<n; i++) 
	{
		printf("Enter values at arr[%d]=",i);
		scanf("%d",& arr[i]);
	}
}
void Traverse() 
{
	printf("\nAfter inserting an elements.....");
	arr[5]=55;
	for(i=0; i<6; i++) 
	{
		printf("\nEnter values at arr[%d]=%d",i,arr[i]);
	}
}
void Delete() 
{
	printf("\nAfter deleting elements from ends.....");
	for(i=0; i<5; i++) 
	{
		printf("\nEnter values at arr[%d]=%d",i,arr[i]);
	}
}
void Delete_Position() 
{
    int pos;
    printf("\nEnter the any position from to delete....");
    scanf("%d",& pos);
    for(i=pos;i<=n-1;i++)
    {
    	arr[i]=arr[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	printf("\nThe values of arr[%d]=%d",i,arr[i]);
}
int main()
{
	Insert();
	Traverse();
	Delete();
	Delete_Position();
	getch();
	return(0);
}