#include<stdio.h>
#include<conio.h>
void main()
{
    int *a = (int *)malloc(sizeof(int));
    if(a!=NULL)
    {
        printf("Enter a number\n");
        scanf("%d",a);
        printf("Entered number = %d",*a);
        free(a);
    }
    else
    {
        printf("Memory is not available");
    }
}
