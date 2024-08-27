#include <conio.h>
int main()
{
    int i,n,k,j,num,pos,arr[10];
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the number to be inserted : ");
    scanf("%d", &num);
    printf("\n Enter the position at which the number has to be added : ");
    scanf("%d", &pos);
    for(j=pos;j<n;j++)
    {
   	    printf("\n After replace the value at index[%d] by value of index[%d]...",j,j+1);
   	    Arr[j]=Arr[j+1];
    }
    k=n-1;
    printf("\n The array after insertion of %d is : ", num);
    for(i=0;i<n;i++)
    printf("\n arr[%d] = %d", i, arr[i]);
    getch();
    return 0;
}