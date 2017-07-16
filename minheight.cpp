#include<iostream>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
unsigned long a;
cin>>a;
unsigned long k;
unsigned long  b,c,m,n;
if(a%2 !=0){
    k = ((a-1)/2);
    m = k+1;
    n =k;
    b = 2*m*n;
    c = (m*m + n*n);
}else{
    k = a;
    unsigned long  k1;
    while(k%2==0){
        k/=2;
    }
    if(k == 1){
       b = (3*a)/4;
       c = (5*a)/4;
       cout<<a<<" "<<b<<" "<<c<<"\n";
        return 0;
    }
    k1 = ((k-1)/2);
    m = k1+1;
    n =k1;
    b = 2*m*n;
    b*= (a/k);
    c = (m*m + n*n);
    c*=(a/k);
}
cout<<a<<" "<<b<<" "<<c<<"\n";
return 0;
}
