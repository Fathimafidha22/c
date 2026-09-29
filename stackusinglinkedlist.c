 1 #include <stdio.h>
  2 #include <stdlib.h>
  3 struct node
  4 {
  5     int data;
  6     struct node*next;
  7 };
  8 struct node *top =NULL;
  9 void push(int value)
 10 {
 11     struct node *newnode=(struct node*)malloc(sizeof(struct node));
 12     if( newnode == NULL)
 13     {
 14        printf("stack overflow\n");
 15     return;
 16 }
 17     newnode->data =value;
 18     newnode->next =top;
 19     top = newnode;
 20     printf("%d pushed to stack\n",value);
 21     }
 22 void pop()
 23 {
 24     if (top == NULL)
 25     {
 26         printf("stack is empty\n");
 27         return;
 28     }
 29     struct node *temp = top;
 30     printf("%d popped from stack\n",top->data);
 31     top =top->next;
 32     free (temp);
 33 }
 34 void display()
 35 {
 36     if (top ==NULL)
 37     {
 38         printf("stack is empty\n");
 39             return;
 40     }
 41     struct node*temp=top;
 42     printf("stack elements:");
 43         while(temp!=NULL)
 44     {
 45         printf("%d",temp->data);
 46         temp=temp->next;
 47     }
 48 }
 49     int main()
 50     {
 51         int choice,value;
 52         while(1)
 53         {
 54             printf("stack using linkedlist\n");
 55             printf("1:push\n 2:pop\n 3:display\n 4:exit\n");
 56                 printf("enter your choice:");
 57             scanf("%d",&choice);
 58                 switch(choice)
 59                 {
 60                 case 1:
 61                     printf("enter value to push:");
 62                     scanf("%d",&value);
 63                     push(value);
 64                     break;
 65                 case 2:
 66                     pop();
 67                     break;
 68                 case 3:
 69                     display();
 70                     break;
 71                 case 4:
 72                     printf("existing\n");
 73                     return 0;
 74                     printf("invalid choice:\n");
 75                 }
 76         }
 77         return 0;
 78 }
               