#include<iostream>
#include<algorithm>
using namespace std;
const int Max = 1e4 + 5;
int id[Max],nodes,edges;
pair <long long,pair<int,int> > p[Max];
void initialize();
int root(int);
void Union(int,int);
int main(){
cin>>nodes;
cin>>edges;
initialize();
int a,b;
long long weight;
for(int i=0;i<edges;i++){
    cin>>a;
    cin>>b;
    cin>>weight;
    p[i] = make_pair(weight,make_pair(a,b));
}
int s;
cin>>s;
sort(p,p+edges);
weight = 0;
for(int i=0;i<edges;i++){
    if(root(p[i].second.first)!=root(p[i].second.second)){
        weight+=p[i].first;
        Union(p[i].second.first,p[i].second.second);
    }
}
cout<<weight;
return 0;
}
void initialize(){
    for(int i=0;i<Max;i++){
        id[i] = i;
    }
}
int root(int x){
    while(x != id[x]){
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}
void Union(int x,int y){
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}
