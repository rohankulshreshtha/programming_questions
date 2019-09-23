/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <list>
using namespace std;

struct graph {
    int v;
    list<int> *adj;
};

struct graph* createGraph (int v) {
    struct graph* g = (struct graph*) malloc(sizeof(struct graph));
    g->v = v;
    g->adj = new list<int>[v];
}

void addEdge(struct graph *g , int v , int w) {
    g->adj[v].push_back(w);
}

void DFS(struct graph *g , int s) {

}

void BFS(struct graph *g , int s) {

}

int main()
{
    struct graph* g = createGraph(4);
    addEdge(g,0, 1);
    addEdge(g,0, 2);
    addEdge(g,1, 2);
    addEdge(g,2, 0);
    addEdge(g,2, 3);
    addEdge(g,3, 3);
    DFS(g,2);
    return 0;
}
