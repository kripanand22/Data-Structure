#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],n,i,num;
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
    num = arr[n-1];
    printf("Elements deleted=%d\n",num);
    n--;

    printf("Elements of array after deletion\n");
    for(i=0 ;i<n ;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
