#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[1000];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int cons = a[n-1];
int i=n-2;
bool flag = true;
while(i>=0 && flag){
    if(cons < a[i]){
        a[i+1] = a[i];
    }else{
        a[i+1] = cons;
        flag = false;
    }
    for(int p=0;p<n;p++){
        cout<<a[p]<<" ";
    }
    cout<<endl;
    i--;
}
if(cons < a[0]){
    a[0] = cons;
    for(int p=0;p<n;p++){
        cout<<a[p]<<" ";
    }
}
return 0;
}
