 #include <stdio.h>
  2 void swap(int *a,int *b)
  3 {
  4     int temp;
  5     temp =*a;
  6     *a = *b;
  7     *b = temp;
  8 }
  9 int main()
 10 {
 11     int a,b;
 12      printf("enter first number:");
 13      scanf("%d",&a);
 14      printf("enter second number:");
 15      scanf("%d",&b);
 16      swap (&a ,&b);
 17     printf("after swap :\n");
 18     printf("a=%d\n" ,a);
 19     printf("b=%d\n",b);
 20     return 0;
 21 }
 22
~
 output:
enter first number:10
enter second number:20
after swap :
a=20
b=10
