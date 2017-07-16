#include<iostream>
#include<cstdio>
using namespace std;
int main(){
unsigned int n,m,a[100000],index[100000];
scanf("%u %u", &n,&m);
for(unsigned int i=0;i<n;i++){
    scanf("%u", &a[i]);
    index[a[i]] = i;
}
for(unsigned int i=0,j=0;i<m,j<n;j++){
    if(a[j] < (n-j)){
        int tmp = index[n-j];
        swap(a[j],a[index[n-j]]);
        index[a[j]] = tmp;
        index[n-j] = j;
        i++;
    }
}
for(unsigned int i=0;i<n;i++){
    printf("%ld",a[i]);
    printf(" ");
}
return 0;
}
