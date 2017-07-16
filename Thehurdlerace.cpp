#include<iostream>
using namespace std;
int main(){
int n,m;
int a[1000];
cin>>n>>m;
int result = 0,maxx=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i] > maxx){
        maxx = a[i];
    }
}
if(maxx > m) result = maxx-m;
cout<<result<<endl;
return 0;
}
