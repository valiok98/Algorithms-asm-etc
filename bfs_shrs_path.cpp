#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
int new_n[1001];
bool visit[1001];
int level[1001];
int result[11][1001];
int cur_level;
int q,n,m,a,b;
int p,cur_node;
cin>>q;
for(int s=0;s<q;s++){
    vector<int> Edg[1000];
    queue<int> Q;
    memset(visit,0,sizeof(visit));
    memset(level,-1,sizeof(level));
    cur_level=0;
    cin>>n>>m;
    new_n[s] = n;
    for(int j=0;j<m;j++){
        cin>>a>>b;
        Edg[a].push_back(b);
        Edg[b].push_back(a);
    }
    cin>>p;
    Q.push(p);
    level[p] = 0;
    while(!Q.empty()){
        cur_node = Q.front();
        visit[cur_node] = 1;
        Q.pop();
        for(int j=0;j<Edg[cur_node].size();j++){
            if(!visit[Edg[cur_node][j]]){
                visit[Edg[cur_node][j]] = 1;
                Q.push(Edg[cur_node][j]);
                level[Edg[cur_node][j]] = level[cur_node]+1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(i == p) continue;
        else if(level[i] == -1) result[s][i] = -1;
        else result[s][i] = level[i]*6;
    }
}
for(int i=0;i<q;i++){
    for(int j=1;j<=new_n[i];j++){
        if(result[i][j] == 0) continue;
        else cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
