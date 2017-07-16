#include<iostream>
using namespace std;
int main(){
int n;
int a[10001],cnt[10001],reg=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    for(int j=a[i]-1;j>0;j--){
        int k = a[i]^j;
        if(k > a[i]){
                reg++;
           // cout<<"for : "<<a[i]<<"  "<<k<<" from:"<<j<<endl;
    }
    }
    cnt[i] = reg;
    reg=0;
}
for(int i=0;i<n;i++){
    cout<<cnt[i]<<endl;
}
return 0;
}
