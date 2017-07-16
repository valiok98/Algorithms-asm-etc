#include<iostream>
using namespace std;
int main(){
char a[200001];
int i=0,len=0;
cin>>a;
while(a[i]!='\0'){
    i++;
    len++;
}
int ans=0;
if(a[0] == 0 or len == 1) ans = 0;
else{
    int j=0;
    if(len%2==0){
            while(j<len/2 -1){
                if(a[j+1]!='0') ans++;
                j++;
            }
            int t=0;
            j=len/2;
            while((a[t]-'0') == (a[j]-'0') and j<len){
                t++;
                j++;
            }
            if(j==len) {j--; t--;}
            if((a[t]-'0') <= (a[j]-'0') ) ans++;
    }else{
        while(j<len/2){
            if(a[j+1]!='0') ans++;
                j++;
        }
    }
}
cout<<ans<<endl;
return 0;
}
