#include <stdio.h>

#define V 5

int graph[V][V] = {
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,1},
    {0,1,1,0,1},
    {0,0,1,1,0}
};

void BFS(int start){
    int visited[V]={0}, queue[V], front=0,rear=0;
    queue[rear++]=start; visited[start]=1;

    while(front<rear){
        int v=queue[front++];
        printf("%d ", v);
        for(int i=0;i<V;i++)
            if(graph[v][i] && !visited[i]){
                queue[rear++]=i;
                visited[i]=1;
            }
    }
}

void DFSUtil(int v, int visited[]){
    visited[v]=1;
    printf("%d ", v);
    for(int i=0;i<V;i++)
        if(graph[v][i] && !visited[i])
            DFSUtil(i,visited);
}

void DFS(int start){
    int visited[V]={0};
    DFSUtil(start,visited);
}

int main(){
    printf("BFS: "); BFS(0);
    printf("\nDFS: "); DFS(0);
    return 0;
}