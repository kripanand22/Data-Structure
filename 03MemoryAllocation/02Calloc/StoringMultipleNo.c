#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *a, i, n;
    printf("Enter how many number you want to store\n");
    scanf("%d",&n);

    a=(int *)calloc(n,sizeof(int));
    if(a==NULL)
    {
        printf("Memory is not empty\n");
    }
    else
    {
        printf("Enter %d elements\n",n);
        for(i=0 ;i<n ;i++)
        {
            scanf("%d",a+i);
        }
        printf("\n%d elements are\n",n);
        for(i=0 ;i<n ;i++)
        {
            printf("%d\n ",*(a+i));
        }
        free(0);
    }
}
