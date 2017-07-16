#include<iostream>
#include<vector>
using namespace std;
void Endgraph();
class Graph{
    public:
        Graph();
        vector <int> A;
};
void Restructure(vector<Graph>&);
bool Consists(int,vector<int>);
Graph::Graph(){
}
void Restructure(vector<Graph> &re){
    for(int i=0;i<re.size();i++){
        for(int j=0;j<re[i].A.size();j++){
            if(re[i].A[j] <= re.size() && Consists(re[i].A[j],re[re[i].A[j]-1].A) == false){
                re[re[i].A[j]-1].A.push_back(i+1);
            }
        }
    }
}
bool Consists(int k,vector<int> A){
    for(int i=0;i<A.size();i++){
        if(A[i] == k) return true;
    }
    return false;
}
int main(){
 Endgraph();
return 0;
}
void Endgraph(){
vector<Graph> graph;
int vertices,k;
cin>>vertices;
for(int i=0;i<vertices;i++){
    Graph NewGraph;
    graph.push_back(NewGraph);
    cout<<"Insert children of: "<<i+1<<": ";
    do{
        cin>>k;
        graph[i].A.push_back(k);
    }while(cin.get()!='\n');
}
Restructure(graph);
for(int i=0;i<vertices;i++){
    for(int j=0;j<graph[i].A.size();j++){
            cout<<graph[i].A[j]<<" ";
    }
    cout<<endl;
}
}
