#include <stdio.h>
#define V 5
#define INF 9999

int graph[V][V]={
    {0,10,0,5,0},
    {0,0,1,2,0},
    {0,0,0,0,4},
    {0,3,9,0,2},
    {7,0,6,0,0}
};

int minDist(int dist[], int visited[]){
    int min=INF, idx;
    for(int i=0;i<V;i++)
        if(!visited[i] && dist[i]<min)
            min=dist[i], idx=i;
    return idx;
}

void dijkstra(int src){
    int dist[V], visited[V]={0};

    for(int i=0;i<V;i++) dist[i]=INF;
    dist[src]=0;

    for(int count=0;count<V-1;count++){
        int u=minDist(dist,visited);
        visited[u]=1;

        for(int v=0;v<V;v++)
            if(graph[u][v] && !visited[v]
               && dist[u]+graph[u][v]<dist[v])
                dist[v]=dist[u]+graph[u][v];
    }

    printf("Distances:\n");
    for(int i=0;i<V;i++)
        printf("%d -> %d\n", i, dist[i]);
}

int main(){
    dijkstra(0);
    return 0;
}