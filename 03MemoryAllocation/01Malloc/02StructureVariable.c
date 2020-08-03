#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
        int roll_no;
        char name[15];
        int marks;
    };
    struct student *s =(struct student *)malloc(sizeof(struct student));
    if(s!=NULL)
    {
        printf("Enter roll number, name and marks\n");
        scanf("%d%s%d",&s->roll_no,&s->name,&s->marks);

        printf("Roll no.=%d\nName=%s\nMarks=%d",s->roll_no,s->name,s->marks);
        free(s);
    }
    else
    {
        printf("Memory is not available");
    }
}
