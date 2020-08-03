#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],n,i,num,pos;
    printf("How many number you want to stored in array\n");
    scanf("%d",&n);
    printf("Enter %d elements in array\n",n);
    for(i=0 ;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements of array before insertion\n");
    for(i=0 ;i<n ;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Enter the position of Elements\n");
    scanf("%d",&pos);
    printf("Enter the Elements you want to insert\n");
    scanf("%d",&num);
    for(i=n-1 ;i>=pos ;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    n++;
    printf("Elements of array after insertion\n");
    for(i=0 ;i<n ;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
