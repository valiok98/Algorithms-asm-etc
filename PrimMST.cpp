#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int best = 0;
void Prim(int);
vector<int> V[10000][2];
int main(){
int n,m,a,b,w;
cin>>n>>m;
for(int i=0;i<m;i++){
    cin>>a>>b>>w;
    V[a][0].push_back(b);
    V[b][0].push_back(a);
    V[a][1].push_back(w);
    V[b][1].push_back(w);
}
cin>>a;
    Prim(a);
    cout<<best<<endl;
return 0;
}
void Prim(int node){
    bool visited[3001];
    memset(visited,0,sizeof(visited));
    queue<int> Q;
    vector<int> Edges;
    Q.push(node);
    int p=1;
        while(!Q.empty()){
            int cur = Q.front();
            visited[cur] = 1;
            Q.pop();
            for(int i=0;i<V[cur][0].size();i++){
                if(!visited[V[cur][0][i]]){
                        Edges.push_back(V[cur][1][i]);
                        Q.push(V[cur][0][i]);
                }
            }

            sort(Edges.begin(), Edges.end());
            best+=Edges[0];
            for(int i=0;i<V[cur][0].size();i++){
                if(V[cur][1][i] == Edges[0] and !visited[V[cur][0][i]]){
                    //visited[V[cur][0][i]] = 1;
                    cout<<best<<endl;
                    break;
                }
            }
            Edges.erase (Edges.begin());

        }
}
