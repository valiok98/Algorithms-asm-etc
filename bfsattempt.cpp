#include<iostream>
#include "QueueBFS.h"
#include "QueueBFS.cpp"
using namespace std;
struct Node
{
    int value;
    struct Node* next;
};
struct AdjList
{
    struct Node* head;
};
struct Graph
{
    int v;
    bool visited[10000];
    struct AdjList* arr;
    Graph(int v)
    {
        this->v = v;
        arr = new AdjList[v];
        for(int i=0; i<v; i++)
        {
            arr[i].head = NULL;
        }
    }
    Node* createNode(int val)
    {
        Node* newNode = new Node;
        newNode->value = val;
        newNode->next = NULL;
        return newNode;
    }
    void addEdge(int src,int dest)
    {
        Node* newNode = createNode(dest);
        newNode->next = arr[src].head;
        arr[src].head = newNode;
     //   newNode = createNode(src);
       // newNode->next = arr[dest].head;
        //arr[dest].head = newNode;

    }
    void Printgraph()
    {
        for(int i=0; i<v; i++)
        {
            Node* newHead = arr[i].head;
            cout<<"Children of: "<<i<<"are: ";
            while(newHead)
            {
                cout<<newHead->value<<" ";
                newHead = newHead->next;
            }
            cout<<endl;
        }
    }
    void BFS(int node)
    {
        cout<<"BFS traverse \n";
        Node* newNode = arr[node].head;
        QueueBFS* newQueue = new QueueBFS(node);
        while(true)
        {
            visited[node] = true;
                cout<<newQueue->value<<endl;
            while(newNode)
            {
                if(visited[newNode->value] ==false)
                {
                    visited[newNode->value] = true;
                    newQueue->Insert(newNode->value);
                }
                newNode = newNode->next;
            }
             newQueue->Pop(&newQueue);
            if(newQueue->is_Empty()) break;
            newNode = arr[newQueue->value].head;
        }

        delete newQueue;
    }
};
    int main()
{
    int n,m,a,b;
    cout<<"Number of vertexes: ";
    cin>>n;
    Graph graph(n);
    cout<<"Number of edges: ";
    cin>>m;
    for(int i=0;i<m;i++){
            cout<<"Enter Edge num "<<i<<"| ";
        cin>>a>>b;
    graph.addEdge(a,b);
    }
    graph.Printgraph();
    graph.BFS(0);
    return 0;
}
