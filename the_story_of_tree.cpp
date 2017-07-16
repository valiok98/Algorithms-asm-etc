#include<iostream>
#include<vector>
#define Max 1e5
using namespace std;
typedef unsigned long ulng;
int main(){
int q,n;
vector<ulng> p[long(Max)];
ulng a,b;
cin>>q;
for(int i=0;i<q;i++){
    cin>>n;
    for(int j=0;j<n-1;j++){
        cin>>a>>b;
        p[a].push_back(b);
    }
}



return 0;
}
