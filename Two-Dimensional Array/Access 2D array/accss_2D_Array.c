#include<stdio.h>
void main()
{
    int i,j,a[2][3]={
        {1,2,3},{4,3,2}
        };
    for(i=0 ;i<2 ;i++)
    {
        for(j=0 ;j<3 ;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
