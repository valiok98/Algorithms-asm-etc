#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
int n;
scanf("%d",&n);
unsigned int a[100000],b[100000];
for(int i=0;i<n;i++){
    scanf("%u",&a[i]);
}
for(int i=0;i<n;i++){
    scanf("%u",&b[i]);
}
unsigned int Min1 =a[0],Min2 =b[0],cur1=0,cur2=0,result=0,Min_1=0,Min_2=0;
bool flag1,flag2;
    for(int j=0;j<n;j++){
        if(a[j] < Min1) {Min1 = a[j], cur1 = j;}
        if(b[j] < Min2) {Min2 = b[j], cur2 = j;}
    }
    swap(a[cur1],a[0]);
    swap(b[cur2],b[0]);
    Min_1 = a[1];
    Min_2 = b[1];
    for(int j=1;j<n;j++){
        if(a[j] < Min_1) {Min_1 = a[j];}
        if(b[j] < Min_2) {Min_2 = b[j];}
    }
    if(cur1 == cur2){
        result = abs(Min1 + Min_2) < abs(Min2 + Min_1) ? Min1 + Min_2 : Min2 + Min_1;
        printf("%u",result);
        return 0;
    }
    result = (Min1+Min2);
    printf("%u",result);
return 0;
}
