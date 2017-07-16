#include<iostream>
using namespace std;
int main(){
char a[3],b[3],c[3];
int k;
cin>>a>>b>>c>>k;
int num[3];
num[0] = a[k-1] - '0';
num[1] = b[k-1] - '0';
num[2] = c[k-1] - '0';
for(int i=1;i<3;i++){
    while(num[i-1]<num[i] and i>=1){
            swap(num[i-1],num[i]);
                i--;
    }
}
if(num[0] > 4) cout<<num[0];
else if(num[1] > 4) cout<<num[1];
else if(num[2] > 4) cout<<num[2];
else cout<<"No";
return 0;
}
