#include<stdio.h>
#define size 5
int Q[size];
int front=-1;
int rear=-1;
void InsertQ()
{
    int n;
    if(rear==size-1)
    {
        printf("Queue Overflow");
        return;
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=rear+1;
    }
    printf("Enter value to insert:");
    scanf("%d",&n);
    Q[rear]=n;
}

void Status()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue is now:-\n");
    for(i=front;i<=rear;i++)
        printf("%d  ",Q[i]);
}
void Delete()
{
    if(front==-1 && rear==-1 || front>rear)
    {
        printf("Queue is empty");
        front=-1;
        rear=-1;
        return;
    }
    printf("%d Is Deleted",Q[front]);
    front=front+1;
}
void special_insert()
{
    int p;
    int x,i;
    printf("\n enter the postion\n");
    scanf("%d",&p);
    if(rear==-1)
    {
        printf("\n special insert cannot be done ");
    }
    else
    {
        printf("\nEnter the value");
        scanf("%d",&x);
        for(i=rear; i>p; i--)
        {

        }
        Q[i]=x;
    }


}
void main()
{
    int ch;
    do
    {
        printf("\n -: M E N U :-\n============");
        printf("\n1.....Insert Q");
        printf("\n2.....Status Q");
        printf("\n3.....Delete Q");
        printf("\n4.....Special Insert");
        printf("\n5.....Exit");
        printf("\nEnter Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:InsertQ();break;
            case 2:Status();break;
            case 3:Delete();break;
            case 4:special_insert();break;
        }
    }while(ch!=5);
}




