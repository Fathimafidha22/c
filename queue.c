 #include<stdio.h>
  2 int main()
  3 {
  4     int i,n ,ch,v;
  5     printf("enter size of queue:");
  6     scanf("%d",&n);
  7     if(n<=0)
  8     {
  9         printf("invalid size!\n");
 10         return 1;
 11     }
 12     int queue[n];
 13     int f=-1,r=-1;
 14     while(1)
 15     {
 16         printf(" 1.ENQUEUE\n 2.DEQUEUE\n 3.DISPLAY\n 4.EXIT\n");
 17         printf("enter your choice :");
 18         scanf("%d",&ch);
 19         if (ch==1)
 20         {
 21             if (r==n-1)
 22             {
 23                 printf("QUEUE IS FULL\n");
 24             }
 25             else
 26             {
 27                 printf("enter the element:");
 28                 scanf("%d",&v);
 29                 r=r+1;
 30                 queue[r]=v;
 31                 if (f==-1)
 32                 {
 33                     f=0;
 34                 }
 35             }
 36         }
 37         else if(ch==2)
 38         {
 39             if (f==-1||f>r)
 40             {
 41                 printf("QUEUE IS EMPTY\n");
 42             }
 43             else
 44         {
 45             printf("DELETED %d\n",queue[f]);
 46             f=f+1;
 47         }
 48         }
 49         else if (ch==3)
 50         {
 51             if(f==-1||f>r)
 52             {
 53                 printf("queue is empty\n");
 54             }
 55             else
 56             {
 57                 printf("queue is:");
 58                 for(i=f;i<=r;i++)
 59                 {
 60                     printf("%d",queue[i]);
 61                 }
 62                 printf("\n");
 63             }
 64         }
 65         else if(ch==4)
 66         {
 67             break;
 68         }
 69         else
 70         {
 71             printf("invalid choice\n");
 72         }
 73     }
 74     return 0;
 75 }
 76
         