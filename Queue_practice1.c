#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
void insert(int);
int del();
void display();
int queue[MAX];
int front= -1;
int rear = -1;

main()
{
    int choice,num;
    while(1)
    {
        printf("\nEnter Your Choice:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("your choice:\t");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                    printf("\nEnter a Number to be Inserted:\n");
                    scanf("%d",&num);
                    insert(num);
                    break;
                case 2:
                    num=del();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    exit(1);
                default :
                    printf("\nInvalid Choice\n");

        }
    }

}

void insert(int element)
{
    if(rear==MAX-1)
    {
        printf("Queue is Full\n");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    rear=rear+1;
    queue[rear]=element;
}

int del()
{
    int element;
    if(front==-1 || front==rear+1)
    {
        printf("Queue is Full\n");
        return;
    }
    element=queue[front];
    front=front+1;
    printf("%d has been deleted",element);
    return element;
}

void display()
{
     int i;
    if(front==-1 || front==rear+1)
    {
        printf("Queue is Full\n");
        return;
    }

    for(i=front;front<=rear;i++)
    {
        printf("%d",queue[i]);
    }
}

