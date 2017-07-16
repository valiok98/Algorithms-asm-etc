#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void dfs(int);
vector <int> v[10000];
bool visited[10000];
int best =0;
int main(){
int n,m,a,b;
memset(visited,0,sizeof(visited));
cin>>n>>m;
for(int i=0;i<m;i++){
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
}
int best2=0;
for(int j=1;j<=n;j++){
    dfs(j);
    if(best > best2) best2 = best;
    best  =0;
}
cout<<best2<<endl;
return 0;
}
void dfs(int node){
    for(int i=0;i<v[node].size();i++){
        if(!visited[v[node][i]]){
                best++;
            visited[v[node][i]] = 1;
            dfs(v[node][i]);
        }
    }
}
