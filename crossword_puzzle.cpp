#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c;
int q,ans[101];
cin>>q;
for(int i=0;i<q;i++){
    cin>>a>>b>>c;
    if(abs(a-c) == abs(b-c)) ans[i] = 0;
    else if(abs(a-c) < abs(b-c)) ans[i] = 1;
    else ans[i] = 2;
}
for(int i=0;i<q;i++){
    if(ans[i] == 0) cout<<"Mouse C"<<endl;
    else if(ans[i] == 1) cout<<"Cat A"<<endl;
    else cout<<"Cat B"<<endl;
}

return 0;
}
