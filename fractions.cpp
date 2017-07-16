#include<iostream>
using namespace std;
int gcd(int,int);
int main(){
int a,b,c;
cin>>a>>b>>c;
c++;
b++;
while(gcd(c,b)!=1 and c<=a){
    b++;
    c++;
}
cout<<b<<" "<<c;
return 0;
}
int gcd(int a,int b){
    if(b==0) return a;
    if(b==1) return 1;

    else return gcd(b,a%b);
}
