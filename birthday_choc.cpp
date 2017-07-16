#include<iostream>
using namespace std;
int main(){
int n,d,m,a[101];
int cur_sum =0,ans=0;
cin>>n;
int dyn_mry = 0;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>d>>m;
for(int i=0;i<m;i++){
        dyn_mry+=a[i];
}
for(int i=1;i+m-1<=n;i++){
    if(dyn_mry == d) ans++;
    dyn_mry-= a[i-1];
    dyn_mry+= a[i+m-1];
}
cout<<ans<<endl;
return 0;
}
