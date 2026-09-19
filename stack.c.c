 #include <stdio.h>
  2 int main()
  3 {
  4     int stack[100];
  5     int top=-1;
  6     int n ,ch,val,i;
  7     printf("enter the size of stack:");
  8     scanf("%d",&n);
  9     if(n<=0|| n>100)
 10     {
 11     printf("invalid size!\n");
 12     return 1;
 13     }
 14     while (1)
 15     {
 16         printf("\nSTACK OPERATIONS\n");
 17         printf("1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
 18         printf("enter your choice:");
 19         scanf("%d",&ch);
 20         if (ch==1)/*push*/
 21         {
 22             if (top==n-1)
 23             {
 24                 printf("stack overflow\n");
 25             }
 26             else
 27             {
 28                 printf("enter value:");
 29                 scanf("%d",&val);
 30                 top++;
 31                 stack[top]=val;
 32                 printf("%d pushed\n",val);
 33             }
 34         }
 35         else if(ch==2)/*pop*/
 36         {
 37             if(top==-1)
 38             {
 39                 printf("stack underflow\n");
 40             }
 41             else
 42             {
 43                 printf("%d popped\n",stack[top]);
 44                 top--;
 45             }
 46         }
 47         else if (ch==3)/*display*/
 48         {
 49             if(top==-1)
 50             {
 51                 printf("stack is empty\n");
 52             }
 53             else
 54             {
 55                 printf("stack elements are :\n");
 56                 for(i=top;i>=0;i--)
 57                 {
 58                     printf("%d\n",stack[i]);
 59                 }
 60             }
 61         }
 62         else if (ch==4)/*exit*/
 63         {
 64             break;
 65         }
 66         else
 67         {
 68             printf("invalid choice!\n");
 69         }
 70     }
 71     return 0;
 72 }



                             