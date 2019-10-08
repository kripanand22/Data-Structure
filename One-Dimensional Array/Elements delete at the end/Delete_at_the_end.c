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
    printf("Elements of array before deletion \n");
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    num=a[n-1];
    printf("\nElements delete=%d\n",num);
    n--;
    printf("Elements of array after deletion \n");
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
