#include<stdio.h>
void main()
{
    int a[10],i,n,num,pos;
    printf("Enter no. of elements\n");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i=0 ;i<n ;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array before deletion \n");
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Enter index you want to delete \n");
    scanf("%d",&pos);
    for(i=pos+1 ;i<n ;i++)
    {
        a[i-1]=a[i];
    }
    n--;
    printf("Elements of array after deletion \n");
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}

