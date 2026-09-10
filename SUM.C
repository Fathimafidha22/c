 #include<stdio.h>
  2 int sumarray(int arr[],int n)
  3 {
  4     int sum=0;
  5     for(int i=0;i<n;i++)
  6     {
  7         sum+=arr[i];
  8     }
  9     return sum;
 10 }
 11 int main()
 12 {
 13     int n ;
 14     printf("enter the no of elements(n):");
 15     scanf("%d",&n);
 16     int arr[n];
 17     printf("enter %d elements:\n",n);
 18     for(int i=0;i<n;i++)
 19     {
 20     scanf("%d",&arr[i]);
 21 }
 22    int result=sumarray(arr,n);
 23    printf("sum of all elements:%d\n",result);
 24    return 0;
 25    }

output:
enter 5 elements:
1
2
3
7
6
sum of all elements:19
