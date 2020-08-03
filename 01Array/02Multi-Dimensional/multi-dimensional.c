#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,r,c;
    printf("Enter the number of row and column you want to store\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int re=r*c;

    printf("Enter %d elements for 2D arrays\n",re);
    for(i=0 ;i<r ;i++)
    {
        for(j=0 ;j<c ;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0 ;i<r ;i++)
    {
        for(j=0 ;j<c ;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
