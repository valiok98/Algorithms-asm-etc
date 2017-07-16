#include<iostream>
using namespace std;
int main(){
int n;
int a[100000];
cin>>n;
int br=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1) br++;
}
int i=0;
int j;
int max_len=0,max_len1=0;
while(i<n){
    while(a[i]==1 and i<n){
        i++;
        max_len1++;
    }
        if(a[i+1]==1 and i<n and a[i-1] == 1){
            j = i+1;
            while(a[j]==1 and j<n){
            j++;
            max_len1++;
            }
        }
        if(max_len1 > max_len) max_len = max_len1;
    max_len1 = 0;
    i++;
}
if(max_len < br) max_len++;
cout<<max_len<<endl;
return 0;
}
