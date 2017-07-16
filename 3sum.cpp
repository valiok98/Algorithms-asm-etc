#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
cin>>n;
string s= to_string(n);

int len =1;
int n1=n;
while(n1){
    len*=10;
    n1/=10;
}
len/=10;
n1=n;
while(n1/len == n1%)
return 0;
}
