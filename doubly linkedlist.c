  1 #include <stdio.h>
  2 #include <stdlib.h>
  3
  4 struct node {
  5     int data;
  6     struct node *prev, *next;
  7 };
  8
  9 struct node *head = NULL;
 10
 11 void insert_begin() {
 12     struct node *n = malloc(sizeof(struct node));
 13     printf("Enter data: ");
 14     scanf("%d", &n->data);
 15
 16     n->prev = NULL;
 17     n->next = head;
 18
 19     if (head != NULL)
 20         head->prev = n;
 21
 22     head = n;
 23 }
 24
 25 void insert_end() {
 26     struct node *n = malloc(sizeof(struct node)), *t = head;
 27     printf("Enter data: ");
 28     scanf("%d", &n->data);
 29     n->next = NULL;
 30
 31     if (head == NULL) {
 32         n->prev = NULL;
 33         head = n;
 34         return;
 35     }
 36
 37     while (t->next != NULL)
 38         t = t->next;
 39
 40     t->next = n;
 41     n->prev = t;
 42 }
 44 void display() {
 45     struct node *t = head;
 46     while (t != NULL) {
 47         printf("%d ", t->data);
 48         t = t->next;
 49     }
 50 }
 51
 52 void delete_node() {
 53     struct node *t = head;
 54     int x;
 55
 56     printf("Enter value: ");
 57     scanf("%d", &x);
 58
 59     while (t != NULL && t->data != x)
 60         t = t->next;
 61
 62     if (t == NULL) return;
 63
 64     if (t->prev != NULL)
 65         t->prev->next = t->next;
 66     else
 67         head = t->next;
 68
 69     if (t->next != NULL)
 70         t->next->prev = t->prev;
 71
 72     free(t);
 73 }
 74
 75 void reverse() {
 76     struct node *t = head;
 77
 78     if (t == NULL) return;
 79
 80     while (t->next != NULL)
 81         t = t->next;
 82
 83     while (t != NULL) {
 84         printf("%d ", t->data);
 85         t = t->prev;
 86     }
 87 }
 88
 89 int main() {
 90     int ch;
 91
 92     while (1) {
 93         printf("\n1.Insert Beginning\n2.Insert End");
 94         printf("\n3.Display Forward\n4.Delete Node");
 95         printf("\n5.Display Reverse\n6.Exit\n");
 96         scanf("%d", &ch);
 97
 98         switch (ch) {
 99             case 1: insert_begin(); break;
100             case 2: insert_end(); break;
101             case 3: display(); break;
102             case 4: delete_node(); break;
103             case 5: reverse(); break;
104             case 6: return 0;
105         }
106     }
107 }
