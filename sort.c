#include<stdio.h>
  2 int main()
  3 {
  4    int a[5],b[5],c[10];
  5    int i , j ,k ,temp;
  6    printf("enter 5 elements of first array:");
  7    for (i=0;i<5;i++)
  8        scanf("%d" ,&a[i]);
  9    printf("enter 5 elements of second array:");
 10    for (i=0;i<5;i++)
 11        scanf("%d" ,&b[i]);
 12
 13    for (i=0;i<4;i++)
 14        for(j=i+1;j<5;j++)
 15         if (a[i] > a[j])
 16    {
 17        temp = a[i];
 18        a[i] = a[j];
 19        a[j] = temp;
 20    }
 21     for (i=0;i<4;i++)
 22        for(j=i+1;j<5;j++)
 23         if (b[i] > b[j])
 24    {
 25          temp = b[i];
 26          b[i] = b[j];
 27          b[j] = temp;
 28    }
 29     for (i=0;i<4;i++)
 30        for(j=i+1;j<5;j++)
 31          if (c[i] > c[j])
 32    {
 33          temp = c[i];
 34          c[i] = c[j];
 35          c[j] = temp;
 36    }
 37
 38    i=0;
 39    j=0;
 40    k=0;
 41    while(i<5&&j<5)
 42    {
 43    if(a[i] <= b[j])
 44        {
 45            c[k] =a[i];
 46            i++;
 47        }
 48        else
 49        {c[k]=b[j];
 50            j++;
 51        }
 52        k++;
 53    }
 54    while(i<5)
 55    {
 56        c[k]=a[i];
 57        i++;
 58        k++;
 59    }
 60    while(j<5)
 61    {
 62        c[k]=b[j];
 63        j++;
 64        k++;
 65    }
 66    printf("merged array:\n");
 67    for(i=0;i<10;i++)
 68        printf("%d  ",c[i]);
 69    return 0;
 70 }

