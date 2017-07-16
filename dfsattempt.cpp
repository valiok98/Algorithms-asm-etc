#include<iostream>
using namespace std;
struct Node{
    int val;
    struct Node* next;
};
struct AdjList{
    struct Node* head;
};
struct Graph{
    int nodes;
    bool visited[100];
    struct Node* newNode;
    struct AdjList* arr;
    Graph(int nodes){
        this->nodes=nodes;
        arr = new AdjList[nodes];
        for(int i=0;i<nodes;i++){
            arr[i].head = NULL;
        }
    }
    ~Graph(){
        delete arr;
        delete newNode;
    }
Node* createNode(int value){
    newNode = new Node;
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}
void addEdge(int src,int dest){
    Node* newNode1 = createNode(dest);
    newNode1->next = arr[src].head;
    arr[src].head = newNode1;
    newNode = createNode(src);
    newNode->next = arr[dest].head;
    arr[dest].head = newNode;

}
void Printgraph(){
    for(int i=0;i<nodes;i++){
            Node* newHead = arr[i].head;
            cout<<"Children of: "<<i<<"are: ";
        while(newHead){
            cout<<newHead->val<<" ";
            newHead = newHead->next;
        }
        cout<<endl;
    }
}
void DFS(int node){
            cout<<node<<endl;
        Node* newHead = arr[node].head;
        visited[node]=true;
        while(newHead){
                if(!visited[newHead->val]){
        visited[newHead->val] = true;
        DFS(newHead->val);
                }
        /// visited[newHead->val] = false;
        /// addition to traverse children even if traversed before!
        newHead = newHead->next;
    }
}
    void execute_DFS(){

    }
};
int main(){
Graph graph(7);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(0, 4);
    graph.addEdge(1, 3);
    graph.addEdge(1, 5);
    graph.addEdge(2, 4);
    graph.addEdge(2, 5);
    graph.addEdge(3, 6);
    graph.addEdge(0, 6);

    // print the adjacency list representation of the above graph
    graph.Printgraph();
    cout<<endl<<endl<<endl;
    graph.DFS(0);
return 0;
}
