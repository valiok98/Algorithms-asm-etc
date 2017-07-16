#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long int n,k;
cin>>n>>k;
long long int tmp = pow(2,n);
long long int a[100000];
long long int ans =0,i=0,sth,sth1,calc,t=1;
tmp--;
sth = k < tmp-k ? k : tmp-k;
ans = 2*sth +1;
sth1 = ans;
if(k > tmp/2){
    calc = k - sth - 1;
    sth = -(calc+1);
    while(calc > 0){
        a[i] = sth;
        sth--;
        calc -= (a[i] + t);
        if(calc < 0) break;
        i++;
        t++;
        ans++;
    }
    printf("%I64d", ans);
printf("\n");
for(long long int v=1;v<=sth1;v++){
    if(v % 2 == 0){
    printf("%I64d", v);
    printf(" ");
    }else{
    printf("%I64d", -v);
    printf(" ");
    }
    for(int s=0;s<i;s++){
    printf("%I64d", a[s]);
    printf(" ");
}
}
}else{
    calc = k + sth + 1;
    sth = calc+1;
    while(calc < tmp){
        a[i] = sth;
        sth++;
        calc += (a[i]);
        if(calc > tmp) break;
        i++;
        t++;
        ans++;
    }
printf("%I64d", ans);
printf("\n");
for(long long int v=1;v<=sth1;v++){
    if(v % 2 == 0){
    printf("%I64d", -v);
    printf(" ");
    }else{
    printf("%I64d", v);
    printf(" ");
    }
}
for(int s=0;s<i;s++){
    printf("%I64d", a[s]);
    printf(" ");
}\
}
return 0;
}
