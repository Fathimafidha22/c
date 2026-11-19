#include<stdio.h>
int main()
{
    int n,i,j,graph[10][10],visited[10]={0};
    int queue[10],front=0,rear=-1;
    printf("enter number of nodes:");
    scanf("%d",&n);
    printf("enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    int start;
    printf("enter starting node\n:");
    scanf("%d",&start);
    visited[start]=1;
    queue[++rear]=start;
    printf("BFS order:\n");
    while(front<=rear)
    {
      int node = queue[front++];
      printf("%d", node);
      printf("\n");
      for(int i=0;i<n;i++)
      {
       if(graph[node][i]==1 && visited[i] ==0)
       {
        visited[i]=1;
        queue[++rear]=i;
       }
      }
    }
   return 0;
}
