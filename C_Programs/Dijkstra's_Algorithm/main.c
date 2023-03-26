#include<stdio.h>
#define infinty 99999
#define max 10

void dijkstra(int graph[max][max],int n, int start);

void dijkstra(int graph[max][max],int n, int start)
{
    int cost[max][max],distance[max],pred[max];
    int visited[max], count, mindistance, nextnode, i, j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(graph[i][j]==0){
                cost[i][j] = infinty;
            }
            else {
                cost[i][j] = graph[i][j];
            }   }
    }

        for(i=0;i<n;i++){
            distance[i] = cost[start][i];
            pred[i] = start;
            visited[i] = 0;
        }
        distance[start] = 0;
        visited[start]=1;
        count =1;

        while(count<n-1)
      {
          mindistance = infinty;

          for(i=0;i<n;i++)
          if(distance[i]< mindistance && !visited[i]){
            mindistance = distance[i];
            nextnode = i;
          }

          visited[nextnode] = 1;
          for(i=0;i<n;i++)
            if(!visited[i])
          if(mindistance+cost[nextnode][i]<distance[i]){
            distance[i] = mindistance + cost[nextnode][i];
            pred[i] = nextnode;
          }
          count++;
      }

      for(i=0;i<n;i++)
      if (i !=start){
        printf("Distance from source to %d: %d\n",i+1, distance[i]);
      }
}

int main(){
int graph[max][max], i, j, n, u;
printf("\t Dijkstra's Algorithm\n");
printf("Enter the number of vertices: -\n");
scanf("%d",&n);
printf("Enter the weight of matrix: -\n");
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        scanf("%d",&graph[i][j]);
    }
}

u=0;
dijkstra(graph,n,u);

getch();
return 0;
}
