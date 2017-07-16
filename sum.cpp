#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
if(n>=1){
    for(int j=1;j<=n;j++){
      sum+=j;
    }
    cout<<sum<<endl;
}else{
    for(int j=n;j<=1;j++){
        sum+=j;
    }
    cout<<sum<<endl;
}

return 0;
}
