#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("How many no you want to store in array \n");
    scanf("%d",&n);

    printf("Enter %d elements for the array \n",n);
    for(i=0 ;i<n ;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array are \n");
    for(i=0 ;i<n ;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
}
