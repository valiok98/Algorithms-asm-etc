#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 long int a[100000];
 long int q,n,m,counter=0;
cin>>q>>n>>m;
for(int i=0;i<q;i++){
    cin>>a[i];
    if(a[i]%n==0) a[i] = (a[i]/n);
    else a[i] = (a[i]/n) + 1;

}
sort(a,a+q);
for(int i=0;i<q;i++){
    if(m == 0) break;
    m-=a[i];
    if(m>=0)
    counter++;
    else break;

}
cout<<counter<<endl;
}
