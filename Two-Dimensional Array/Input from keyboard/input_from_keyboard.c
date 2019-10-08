#include<stdio.h>
void main()
{
    int a[2][3],i,j;
    printf("Enter 6 Elements for 2D array\n");
    for(i=0 ;i<2 ;i++)
    {
        for(j=0 ;j<3 ;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements for 2D Array are\n");
    for(i=0 ;i<2 ;i++)
    {
        for(j=0 ;j<3 ;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
