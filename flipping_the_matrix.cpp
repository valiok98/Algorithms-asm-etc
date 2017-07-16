#include<iostream>
using namespace std;
int s[256][256];
int sum[16];
int main(){
int n;
int a;
int tmp1,tmp2;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a;
    sum[i] = 0;
    for(int k=0;k<2*a;k++){
        for(int m=0;m<2*a;m++){
            cin>>s[k][m];
        }
    }
    for(int k=0;k<2*a;k++){
        for(int m=0;m<2*a;m++){
            if(k<a and m<a){
                tmp1 = max(s[k][m],s[k][2*a-m-1]);
                tmp2 = max(s[2*a-k-1][m],s[2*a-k-1][2*a-m-1]);
                sum[i]+= max(tmp1,tmp2);
            }
        }
    }
}
for(int i=0;i<n;i++){
    cout<<sum[i]<<endl;
}
return 0;
}
