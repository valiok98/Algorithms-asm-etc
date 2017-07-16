#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void BFS(int);
vector <int> v[10];
bool vis[10];
int level[10];
int main(){
int nodes,edges;
cin>>nodes>>edges;
int a,b;
for(int i=0;i<edges;i++){
    cin>>a>>b;
    v[a].push_back(b);
}
for(int i=1;i<=nodes;i++){
        cout<<"Children of node: "<<i<<" : ";
    for(int j=0;j<v[i].size();j++){
        if(j == v[i].size() - 1){
            cout<<v[i][j]<<endl;
        }else{
            cout<<v[i][j]<<" ---> ";
        }
    }
}
cout<<"Now time for BFS"<<endl;
BFS(1);
return 0;
}
void BFS(int s){
    queue <int> q;
    q.push(s);
    level[s] = 0;
    vis[s] = true;
    cout<<s<<endl;
        while(!q.empty()){
            int p = q.front();
            q.pop();
            for(int i=0;i<v[p].size();i++){
                if(vis[v[p][i]] == false){
                        cout<<v[p][i]<<endl;
                    level [v[p][i]] = level[p]+1;
                    q.push(v[p][i]);
                    vis[v[p][i]] = true;
                }
            }
        }
}

