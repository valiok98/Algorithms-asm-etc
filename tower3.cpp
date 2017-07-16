#include<iostream>
#include<cmath>
using namespace std;
unsigned long long massiv[1000001];
unsigned long long s = 1;
unsigned long long i =0;
int main(){
for(;i<10;i++){
    s*=3;
    massiv[i+1] = s;
}
unsigned long  long M = 1000000007;
unsigned long long
 n;
cin>>n;
cout<<n<<"  "<<s<<endl;
unsigned long long result = 0;
if(n > s){
    for(unsigned long long i =s;i<n;i++){
        s*=3;
    }
    result = s;
}
else result = massiv[n];
cout<<result<<endl;
return 0;
}
