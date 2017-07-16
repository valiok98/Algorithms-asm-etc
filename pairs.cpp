#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
map<int,int> P;
int a[100000];
for(int i=0;i<n;i++){
    cin>>a[i];
    P[a[i]] = 0;
}
for(int i=0;i<n;i++){
    P[a[i]]++;
}
int counter = 0;
for(int i=0;i<n;i++){
    if(a[i] < k) continue;
    if(P[a[i]-k] > 0){
        counter+=P[a[i]-k];
    }
}
cout<<counter<<endl;
return 0;
}
