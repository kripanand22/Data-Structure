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
    printf("Elements of array before Deletion\n");
    for(i=0 ;i<n ;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Enter the position of elements to delete\n");
    scanf("%d",&pos);
    num=arr[pos];
    printf("%d is deleted from the index %d\n",num,pos);
    for(i=pos ;i<n ;i++)
    {
        arr[i-1]=arr[i];
    }
    n--;
    printf("Elements of array after deletion\n");
    for(i=0 ;i<n ;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
