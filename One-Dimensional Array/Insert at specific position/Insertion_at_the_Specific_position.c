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
    printf("Elements of array before insertion \n");
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
    printf("Enter the elements you want to insert \n");
    scanf("%d",&num);

    printf("Enter the index at which you want to insert \n");
    scanf("%d",&pos);
     for(i=n-1 ;i>=pos ;i--)
     {
         a[i+1]=a[i];
     }
        a[pos]=num;
        n++;
    printf("Elements of array after insertion \n");
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
}
