
#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int n;
cin>>n;
int i=0,j=0,aux=0;
string ans="";
if(n==1) {ans = s;
cout<<ans<<endl; return 0;}
while(ans.length()<s.length()){
    if(i > (s.length()-1)) {j++; i = (j); aux=(2*n -2 -j); }
    if(i==aux) {ans+=s[i];
    cout<<"adding from 1 "<<s[i]<<endl;
    }
    else {
          if(i<=(s.length()-1))   ans+=s[i];
          if(aux<=(s.length()-1)) ans+=s[aux];
             cout<<"adding from 2:  "<<s[i]<<"  "<<s[aux]<<endl;
    }
    i += (2*n - 2);
    aux += (2*n - 2);
}
cout<<ans<<endl;


return 0;
}
