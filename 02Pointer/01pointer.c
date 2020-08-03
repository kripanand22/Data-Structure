#include<stdio.h>
#include<conio.h>
void main()
{
    int x=10,*y=&x;
    printf("%d\n",*y);
    *y=15;
    printf("%d\n",*y);
}
