#include<iostream>
using namespace std;
int main(){
int n,a[100000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int i=0;
int br=0;
while(i<n){
    br++;
    i+= a[i]+1;
   // cout<<i<<endl;
}
cout<<br;
return 0;
}
