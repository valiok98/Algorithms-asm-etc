#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
if(a-c == 0 and b!=d){ cout<<"NO"; return 0;}
if(b-d == 0 and a!=c) { cout<<"NO"; return 0;}
if(b-d == 0 and a==c) { cout<<"YES"; return 0;}
if((a - c)%(d - b) == 0 and (a - c)/(d - b)>0){
    cout<<"YES";
    return 0;
}
cout<<"NO";
return 0;
}
