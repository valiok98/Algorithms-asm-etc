#include<iostream>
using namespace std;
int main(){
double a,b,c,tmp;
cin>>a>>b>>c;
b/=2;
tmp=c-b;
tmp = a - (b*2 + tmp);
cout<<tmp<<endl;

return 0;
}
