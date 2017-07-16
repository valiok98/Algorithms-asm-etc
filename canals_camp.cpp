#include<iostream>
using namespace std;
void dfs(int);
int counter = 0;
bool vis[1001],vis1[1001];
int n,m,k;
int a,b,w;
int p[1001][1001];
int main(){
cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        p[i][j] = 0;
    }
}
for(int i=0;i<m;i++){
    cin>>a>>b>>w;
    vis1[a] = true;
    vis1[b] = true;
    p[a][b] = w;
    p[b][a] = w;
}
cin>>k;
for(int i=1;i<=n;i++){
    if(vis[i] == false and vis1[i]==true){
    vis[i] = true;
    dfs(i);

    counter++;
    }
}
cout<<counter-1<<endl;
return 0;
}
void dfs(int node){
        for(int j=1;j<=n;j++){
            if(p[node][j] >= k and vis[j] == false){
                vis[j] = true;
                dfs(j);
            }
        }
    }
