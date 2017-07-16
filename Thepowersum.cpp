#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
void solve(int,int,int,int,int);
using namespace std;
int gl_ans = 0;
int values[1000];
bool vis=false;
int main(){
    memset(values,0, sizeof( values ));
int n,m;
cin>>n>>m;
solve(n,m,0,1,0);
cout<<gl_ans<<endl;
return 0;
}
void solve(int n,int m,int counter,int start,int result){

    if(result == n){
        gl_ans ++;
        return;
    }else{
        for(int i=start;i<=sqrt(n);i++){
             int s=1;
             if(values[i]==0){
                    for(int j=0;j<m;j++)
                     s*=i;
             values[i]=s;
             }
                else s = values[i];
             if(s <= (n-result)){
                result+=s;
                solve(n,m,gl_ans,i+1,result);
                result-=s;
            }
        }
    }
}
