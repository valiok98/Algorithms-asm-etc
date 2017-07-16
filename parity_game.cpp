#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[1001];
int sum=0;
int even=0,odd=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    if(a[i]%2==0) even++;
    else odd++;
}
if(sum % 2==0) {cout<<0<<endl; return 0;}
else{
    if(odd == n){ cout<<-1<<endl; return 0; }
    else if(odd > 0){ cout<<1<<endl; return 0; }
}
return 0;
}
