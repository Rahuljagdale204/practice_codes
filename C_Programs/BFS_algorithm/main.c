#include<stdio.h>
int a[50][50], q[50], array[50], n, i, j, f = 0, r = -1;

void bfs(int v) {
 for(i = 1; i <= n; i++)
 if(a[v][i] && !array[i])
 q[++r] = i;
 if(f <= r) {
 array[q[f]] = 1;
 bfs(q[f++]);
 }
}

void main() {
 int v;
 printf("\n Enter the Number of Vertices: -\n");
 scanf("%d",&n);

 for(i=1; i <= n; i++) {
 q[i] = 0;
 array[i] = 0;
 }

 printf("\n Enter Graph data in matrix form: -\n");
 for(i=1; i<=n; i++) {
 for(j=1;j<=n;j++) {
 scanf("%d", &a[i][j]);
 }
 }

 printf("\n Enter the starting vertex: -\n");
 scanf("%d", &v);
 bfs(v);
 printf("\n The node which are reachable are: -\n");

 for(i=1; i <= n; i++) {
 if(array[i])
 printf("%d\t", i);
 else {
 printf("\n Bfs is not possible\n");
 break;
 }
 }
}
