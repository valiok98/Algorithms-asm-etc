#include<iostream>
using namespace std;
int main(){
int n,m;
char s[1000000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>s[i];
}
cin>>m;
m%=26;
int lbnd = 97, hibnd = 122, Lbnd = 65, Hibnd = 90;
for(int i=0;i<n;i++){
    int cur=0;

    if(int(s[i]) <= hibnd and int(s[i]) >= lbnd){
        if((int(s[i]) + m) > hibnd){
            cur= (int(s[i]+m -1 - hibnd)) + lbnd;
        }else cur = (int(s[i]) + m) ;
        }else if(int(s[i]) <= Hibnd and int(s[i]) >= Lbnd){
            if((int(s[i]) + m) > Hibnd){

            cur=(int(s[i]) +m -1 - Hibnd) + Lbnd;
        }else cur = (int(s[i]) + m);
    }else continue;
    s[i] = static_cast<char>(cur);
}
for(int i =0;i<n;i++){
    cout<<s[i];
}
return 0;
}
