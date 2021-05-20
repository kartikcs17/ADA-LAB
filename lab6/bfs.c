#include<stdio.h>
#define size 20
#define true 1
#define false 0
int q[size],trav[20],r=-1,f=0;
int n,s,adj[20][20],flag=0;
void ins(int v)
{
    q[++r]=v;
}

int del()
{
    return(q[f++]);
}

int emp()
{

  if(r<f)
    return 1;

  else
    return 0;
}

void bfs(int v)
{
  int w;
  trav[v]=1;
  ins(v);

  while(!emp())
  {
    v=del();
    for(w=1;w<=n;w++)

       if((adj[v][w]==1) && (trav[w]==0))
       {
            trav[w]=1;
              flag=1;
              printf("v%d\t",w);
              ins(w);
       }
   }
}

int main()
{
    int i,j;
    printf("Enter the no.of vertices:\n");
    scanf("%d",&n);
    printf("\n Enter graph data in matrix form:\n");
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
       scanf("%d",&adj[i][j]);
    }


    printf("Enter the start vertex:");
    scanf("%d",&s);
    printf("path of vertex %d\n",s);
    for(i=1;i<=n;i++)
            trav[i]=0;

    bfs(s);

    if(flag==0)
    {
      printf("No path found!!\n");
    }
    return 0;
}
