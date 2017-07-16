#include<iostream>
using namespace std;
int main(){
unsigned int n;
cin>>n;
char ans[200000];
for(int i=0;i<n;i++){
    ans[i]='a';
    if(i>=2){
        if(ans[i-2]=='a') ans[i]='b';
    }
}
for(int i=0;i<n;i++){
    cout<<ans[i];
}
cout<<endl;
return 0;
}
