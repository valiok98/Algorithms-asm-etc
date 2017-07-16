#include<iostream>
#include<vector>
#include<map>
int root(int);
void Union(int,int);
int id[100000];
using namespace std;
int main(){
int n,m,a,b,counter=0;
cin>>n>>m;
map<int,int> values;
vector<int> Edg[100000];
for(int i=0;i<n;i++){
        id[i] = i;
    }
for(int i=0;i<m;i++){
    cin>>a>>b;
    Edg[a].push_back(b);
    values[root(a)] = 0;
    if(root(a) != root(b)){
        Union(a,b);
        values[root(a)]++;
        }
    }
cout<<counter<<endl;
return 0;
}
int root(int x){
    while(x != id[x]){
        id[x] = id[id[x]];
    }
    return x;
}
void Union(int a,int b){
    id[root(b)] = id[root(a)];
}
