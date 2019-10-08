#include<stdio.h>
void main()
{
    int a[10],i,n,num;
    printf("Enter no. of elements\n");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i=0 ;i<n ;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array before insertion \n");
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
    printf("Enter element you want to insert \n");
    scanf("%d",&num);
    a[n]=num;
    n++;

    printf("Elements of array after insertion \n");
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
}
