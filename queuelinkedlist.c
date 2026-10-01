  1 #include<stdio.h>
  2 #include<stdlib.h>
  3 struct node
  4 {
  5     int data;
  6     struct node *next;
  7 };
  8 struct node *front=NULL;
  9 struct node *rear=NULL;
 10 void enqueue(int value)
 11 {
 12     struct node *newnode=(struct node*)malloc(sizeof(struct node));
 13     if (newnode == NULL)
 14     {
 15         printf("queue overflow\n");
 16         return;
 17     }
 18     newnode->data = value;
 19     newnode->next = NULL;
 20     if (rear == NULL)
 21     {
 22         front=rear=newnode;
 23     }
 24     else
 25     {
 26         rear->next=newnode;
 27         rear=newnode;
 28     }
 29     printf("%d enqueued to queue\n",value);
 30 }
 31 void dequeue()
 32 {
 33     if (front == NULL)
 34     {
 35         printf("queue underflow\n");
 36         return;
 37     }
 38     struct node *temp =front;
 39     printf("%d dequeued from queue \n",front->data);
 40     front =front->next;
 41     if (front == NULL)
 42         rear = NULL;
  43     free(temp);
 44 }
 45 void display()
 46 {
 47     if(front==NULL)
 48 {
 49     printf("queue is empty\n");
 50     return;
 51 }
 52 struct node *temp=front;
 53 printf("queue elements:");
 54 while(temp!=NULL)
 55 {
 56     printf("%d ->",temp->data);
 57     temp =temp->next;
 58 }
 59 printf("NULL\n");
 60 }
 61 int main()
 62 {
 63     int choice,value;
 64     while(1)
 65     {
 66         printf("\n queue using linked list \n");
 67         printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
 68         printf("enter your choice:");
 69         scanf("%d",&choice);
 70         switch(choice)
 71         {
 72             case 1:
 73                 printf("enter value to enqueue:");
 74                 scanf("%d",&value);
 75                 enqueue(value);
 76                 break;
 77             case 2:
 78                 dequeue();
 79                 break;
 80             case 3:
 81                 display();
 82                 break;
 83             case 4:
 84                 exit(0);
 85             default:
 86                 printf("invalid choice!");
 87         }
 88     }
 89     return 0;
 90 }
 91


                                 