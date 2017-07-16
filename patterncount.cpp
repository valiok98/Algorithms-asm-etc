#include<iostream>
using namespace std;
int main(){
int q;
cin>>q;
string a;
int ans[21];
for(int i=0;i<q;i++){
    ans[i] = 0;
}

for(int i=0;i<q;i++){
    cin>>a;
    bool flag=false;
    for(int j=0;j<a.length();){
        if(a[j]=='1'){
            j++;
            while(a[j]=='0'){ j++; flag = true; }
            if(a[j]=='1' and flag){ flag = false; ans[i]++; continue;}
            flag= false;
        }else
        j++;
    }
}
for(int i=0;i<q;i++){
cout<<ans[i]<<endl;
}
return 0;
}
