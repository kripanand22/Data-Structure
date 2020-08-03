#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],n,i;
    printf("How many number you want to stored in array\n");
    scanf("%d",&n);
    printf("Enter %d elements in array\n",n);
    for(i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are\n");
    for(i=0 ;i<n ;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
