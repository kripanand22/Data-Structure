#include<stdio.h>
#include<conio.h>
void main()
{
    char *name=(char *)calloc(15,sizeof(char));
    if(name!=NULL)
    {
        printf("Enter Name\n");
        gets(name);
        printf("Name = %s\n",name);

        name = (char *)realloc(name ,30);
        if(name!=NULL)
        {
            printf("Enter your full name\n");
            gets(name);
            printf("Full Name = %s\n",name);
        }
        else
        {
            printf("Memory is not available");
        }
    }
    else
    {
        printf("Memory is not available");
    }
}
