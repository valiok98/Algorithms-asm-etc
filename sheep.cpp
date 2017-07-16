#include<iostream>
#include<vector>
using namespace std;
int main(){
char a[300],b;
cin>>b;
cin>>a;
bool flag = false;
int i=0,cnt=0,
    cntd=0,
mcnt=0,mcnd=0,nums=-1,nume=-1,strs=-1,stre=-1;
while(a[i]!=b){
    while(islower(a[i])){
        cnt++;
        i++;
        flag=true;
    }
    if(cnt>mcnt){
            mcnt = cnt;
            strs = i - cnt;
            stre = i-1;
    }
    while(a[i]>='0' && a[i]<='9'){
        cntd++;
        i++;
        flag=true;
    }
    if(cntd > mcnd){
        mcnd = cntd;
        nums = i-cntd;
        nume = i-1;
    }
    cnt = 0;
    cntd = 0;
    if(!flag){
    i++;
    }
    flag = false;

}
if(nums !=-1){
    for(int j=nums;j<=nume;j++){
        cout<<a[j];
    }
cout<<endl;
}
if(strs !=-1){
    for(int j=strs;j<=stre;j++){
        cout<<a[j];
    }
}
return 0;
}
