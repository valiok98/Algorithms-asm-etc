#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
bool a[101];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int i=0,ctr=0;
while(i<n-1){
    if(a[i]==0){
        ctr++;
        i+=2;
    }else{
        ctr++;
        i++;
    }
}
cout<<ctr;
return 0;
}
