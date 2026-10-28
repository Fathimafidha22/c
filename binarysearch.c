  1 #include <stdio.h>
  2 #include <stdlib.h>
  3
  4 struct Node {
  5     int data;
  6     struct Node *left, *right;
  7 };
  8
  9 struct Node* createNode(int data) {
 10     struct Node* newNode = malloc(sizeof(struct Node));
 11
 12     if (newNode == NULL) {
 13         printf("Memory allocation failed!\n");
 14         exit(1);
 15     }
 16
 17     newNode->data = data;
 18     newNode->left = NULL;
 19     newNode->right = NULL;
 20
 21     return newNode;
 22 }
 23
 24 struct Node* insert(struct Node* root, int data) {
 25     if (root == NULL)
 26         return createNode(data);
 27
 28     if (data < root->data)
 29         root->left = insert(root->left, data);
 30     else if (data > root->data)
 31         root->right = insert(root->right, data);
 32
 33     return root;
 34 }
 35
 36 void preorder(struct Node* root) {
 37     if (root != NULL) {
 38         printf("%d ", root->data);
 39         preorder(root->left);
 40         preorder(root->right);
 41     }
 42 }
 43
 44 struct Node* search(struct Node* root, int key) {
 45     if (root == NULL || root->data == key)
 46         return root;
 47
 48     struct Node* result = search(root->left, key);
 49
 50     if (result != NULL)
 51         return result;
 52
 53     return search(root->right, key);
 54 }
 55
 56 int main() {
 57     struct Node* root = NULL;
 58     int choice, n, data, i;
 59
 60     do {
 61         printf("\n\n1. Create BST");
 62         printf("\n2. Preorder Traversal");
 63         printf("\n3. Search");
 64         printf("\n4. Exit");
 65         printf("\nEnter your choice: ");
 66         scanf("%d", &choice);
 67
 68         switch (choice) {
 69             case 1:
 70                 printf("Enter number of nodes: ");
 71                 scanf("%d", &n);
 72
 73                 for (i = 0; i < n; i++) {
 74                     printf("Enter data: ");
 75                     scanf("%d", &data);
 76                     root = insert(root, data);
 77                 }
 78                 break;
 79
 80             case 2:
 81                 printf("Preorder Traversal: ");
 82                 preorder(root);
 83                 printf("\n");
  84                 break;
 85
 86             case 3:
 87                 printf("Enter value to search: ");
 88                 scanf("%d", &data);
 89
 90                 if (search(root, data) != NULL)
 91                     printf("Element found!\n");
 92                 else
 93                     printf("Element not found!\n");
 94                 break;
 95
 96             case 4:
 97                 printf("Exiting...\n");
 98                 break;
 99
100             default:
101                 printf("Invalid choice!\n");
102         }
103
104     } while (choice != 4);
105
106     return 0;
107 }
                                                                                        
                                                                       