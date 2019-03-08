//
//  main.cpp
//  graph
//
//  Created by Hrishikesh Chaudhari on 11/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <list>

using namespace std;

class Graph{
    int V;
    list<int> *adj;
    
public:
    
    Graph(int V);
    void BFS(int n);
    void DFS(int n);
    
    void addEdge(int v, int w);
    
    
};

Graph::Graph(int V)
{
    this->V= V;
    
    adj = new list<int>[V];
    
}

void Graph::addEdge(int v, int w){
    
    adj[v].push_back(w);
    
}

void Graph::BFS(int n){
    bool *visited = new bool[V];
    
    for(int i =0 ; i<n ; i++)
        visited[i] = false;
    
    list<int> queue;
     visited[n] = true;
    queue.push_back(n);
    
    while(!queue.empty())
    {
        n = queue.front();
        cout<<n<<endl;
        queue.pop_front();
        
        for(auto &i : adj[n])
        {
            if(!visited[i])
            {
                visited[i] = true;
                queue.push_back(i);
            }
        }
            
    }
}
int main(int argc, const char * argv[]) {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    
    cout << "Following is Breadth First Traversal "
    << "(starting from vertex 2) \n";
    g.BFS(2);
    
    return 0;
    return 0;
}
