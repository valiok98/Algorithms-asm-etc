#include<iostream>
#include<cmath>
using namespace std;
int main(){
int ans=0;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    int a = (s[i]-'0');
    if(a<0 or a>9) a = 0;
    ans+=a;
    ans*=10;
}
cout<<ans/10<<endl;
return 0;
}
