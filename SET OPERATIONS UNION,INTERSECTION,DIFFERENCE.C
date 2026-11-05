 1
  2 #include <stdio.h>
  3
  4 #define SIZE 9
  5
  6 typedef struct {
  7     unsigned char x : 1;
  8 } bit;
  9
 10 const int uset[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 11
 12 void readset(bit a[], int n);
 13 void printset(const bit a[]);
 14 void unionset(const bit a[], const bit b[], bit c[]);
 15 void intersect(const bit a[], const bit b[], bit c[]);
 16 void difference(const bit a[], const bit b[], bit c[]);
 17
 18 int main(void)
 19 {
 20     bit a[SIZE] = {{0}}, b[SIZE] = {{0}}, c[SIZE] = {{0}};
 21     int n;
 22
 23     printf("Universal set: {1,2,3,4,5,6,7,8,9}\n\n");
 24
 25     printf("No. of elements in set A: ");
 26     if (scanf("%d", &n) != 1 || n < 0 || n > SIZE)
 27         return 1;
 28
 29     readset(a, n);
 30
 31     printf("No. of elements in set B: ");
 32     if (scanf("%d", &n) != 1 || n < 0 || n > SIZE)
 33         return 1;
 34
 35     readset(b, n);
 36
 37     printf("\nSet A: ");
 38     printset(a);
 39
 40     printf("Set B: ");
 41     printset(b);
 42
 43     unionset(a, b, c);
 44     printf("\nA U B = ");
 45     printset(c);
 46
 47     intersect(a, b, c);
 48     printf("\nA intersect B = ");
 49     printset(c);
 50
 51     difference(a, b, c);
 52     printf("\nA - B = ");
 53     printset(c);
 54
 55     return 0;
 56 }
 57
 58 void readset(bit a[], int n)
 59 {
 60     int i, k, x;
 61
 62     printf("Enter %d elements: ", n);
 63
 64     for (i = 0; i < n; i++) {
 65         if (scanf("%d", &x) != 1)
 66             return;
 67
 68         for (k = 0; k < SIZE; k++) {
 69             if (uset[k] == x) {
 70                 a[k].x = 1;
 71                 break;
 72             }
 73         }
 74
 75         if (k == SIZE)
 76             printf("%d is not in the universal set, ignored.\n", x);
 77     }
 78 }
 79
 80 void printset(const bit a[])
 81 {
 82     int k, first = 1;
 83
 84     printf("{");
  85
 86     for (k = 0; k < SIZE; k++) {
 87         if (a[k].x) {
 88             printf(first ? "%d" : ",%d", uset[k]);
 89             first = 0;
 90         }
 91     }
 92
 93     printf("}\n");
 94 }
 95
 96 void unionset(const bit a[], const bit b[], bit c[])
 97 {
 98     for (int k = 0; k < SIZE; k++)
 99         c[k].x = a[k].x | b[k].x;
100 }
101
102 void intersect(const bit a[], const bit b[], bit c[])
103 {
104     for (int k = 0; k < SIZE; k++)
105         c[k].x = a[k].x & b[k].x;
106 }
107
108 void difference(const bit a[], const bit b[], bit c[])
109 {
110     for (int k = 0; k < SIZE; k++)
111         c[k].x = a[k].x && !b[k].x;
112 }
