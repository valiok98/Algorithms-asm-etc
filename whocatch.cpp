#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
int  a[10000],b[10000],endd[10000];
memset(endd,0,sizeof(endd));
cin>>n>>m;
for(int i=0;i<n;i++){
    cin>>a[i];
    a[i] = abs(a[i]-m);
}
for(int i=0;i<n;i++){
    cin>>b[i];
    unsigned short int cur = (a[i]/b[i]);
    endd[cur]++;
}
int ans=-1;
int finans=0;
for(int i=0;i<n;i++){
        unsigned short int cur = (a[i]/b[i]);
    if(cur < ans or ans<0) {ans = cur; finans = i;}
}
if(endd[ans]>1) finans = -1;
cout<<finans<<endl;
return 0;
}
