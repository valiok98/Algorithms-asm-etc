#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
if(s[8]=='A'){
        if((s[0]-'0')==1 and (s[1]-'0')==2){
            s[0]='0';
            s[1]='0';
        }
}else{
    if((s[0]-'0')!=1 or (s[1]-'0')!=2){
        int d1,d2,tmp;
        d1 = (s[0]-'0');
        d2 = (s[1]-'0');
        tmp = (((d1*10 + d2))+12);
        s[0]=('0' + tmp/10);
        s[1]=('0' + tmp%10);
    }
}
for(int i=0;i<8;i++){
    cout<<s[i];
}

return 0;
}
