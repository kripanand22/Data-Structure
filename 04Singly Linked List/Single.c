 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginning();
void lastinsert();
void randominsert();
void begin_delete();
void end_delete();
void random_delete();
void traverse();

void main()
{
    int ch=0;
    while(ch!=8)
    {
        printf("\n.............Choose option from following list..........\n");
        printf("1:- Insert in beginning\n2:- Insert at End\n3:- Insert at specific location\n4:- Delete from beginning\n5:- Delete from last\n6:- Delete from random\n7:- Show\n");
        printf("\nEnter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            beginning();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            end_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            traverse();
            break;
        case 8:
            exit(0);
        default:
            printf("\nChoose correct option\n");
        }
    }
}

void beginning()
{
    int item;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("\nEnter number\n");;
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\n.........Node inserted...........\n ");
    }
}
void lastinsert()
{
    int item;
    struct node *ptr ,*temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter number\n");
    scanf("%d",&item);
    ptr->data=item;
    if(ptr==NULL)
    {
        printf("Overflow");
    }
    else
    {
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("\n.........Node inserted...........\n");
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("\n.........Node inserted...........\n");
        }
    }
}
void randominsert()
{
    int i,ioc,item;
    struct node *ptr ,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("\nEnter number\n");;
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\n.........Node inserted and this is the first Node ...........\n ");
    }
    else if(ptr==NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter number\n");
        scanf("%d",&item);
        ptr->data=item;
        printf("Enter position\n");
        scanf("%d",&ioc);
        temp=head;
        for(i=0 ;i<ioc-2 ;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("\n.......can,t inserted........\n");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("\n.........Node inserted...........\n");
    }
}
void begin_delete()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nList is Empty............\n");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("\nNode id deleted from the beginning\n");
    }
}
void end_delete()
{
    struct node *ptr,*ptr1;
    if(head==NULL)
    {
        printf("\nList is Empty...........\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("\nOnly node of the list is deleted\n");
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        free(ptr);
        printf("\nDeleted Node from the last\n");
    }
}
void random_delete()
{
    struct node *ptr,*ptr1;
    int ioc,i;
    if(head==NULL)
    {
        printf("\nList is Empty..............\n");
    }
    else
    {
        printf("Enter the location of node you want to delete\n");
        scanf("%d",&ioc);
        ptr=head;
        for(i=0 ;i<ioc-2 ;i++)
        {
            ptr1=ptr;
            ptr=ptr->next;
            if(ptr==NULL)
            {
                printf("\ncan not deleted\n");
                return;
            }
        }
        ptr1->next=ptr->next;
        free(ptr);
        printf("\nnode deleted\n");
    }
}
void traverse()
{
    struct node *ptr;
    ptr = head;
    if(ptr==NULL)
    {
        printf("\nNothing to print\n");
    }
    else
    {
        printf("\nPrinting values...........\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
