#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
string ans = "maybe";
bool red;
int min = 100000;
int a[1001],b[1001];
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
}
for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
        ans = "rated";
        break;
    }
    if(a[i] <= min){
        min = a[i];
    }else{
        ans = "unrated";
    }
}
cout<<ans<<endl;
return 0;
}
