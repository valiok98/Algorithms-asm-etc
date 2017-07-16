#include<iostream>
using namespace std;
void solve(int,int,int);
string ans="NO";
int a[101],b[101],a1[101],b1[101],tmp_a;
int n,tmp_b;
int main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
    a1[i] = a[i];
    b1[i] = b[i];
    if(i == 0 ) {tmp_b = b[i]; tmp_a = a[i];}
}
solve(tmp_b,0,0);
for(int i=0;i<n;i++){
    a[i] = a1[i];
    b[i] = b1[i];
}
solve(tmp_a,1,0);
cout<<ans<<endl;
return 0;
}
void solve(int num,int s,int i){
    //cout<<num<<"  "<<i<<" "<<s<<endl;
    int tmp_a = a[i];
    int tmp_b = b[i];
    a[i] = -1;
    b[i] = -1;
    if(s%2 == 0){
        if(num == b[n-1]) {ans = "YES"; return; }
        for(int t=0;t<n;t++){
            if(b[t] == num){
                s++;
                solve(a[t],s,t);
                s--;
                a[i] = tmp_a;
                b[i] = tmp_b;
            }
        }
    }else{
        if(num == a[n-1]) {ans = "YES"; return; }
        for(int t=0;t<n;t++){
            if(a[t] == num){
                s++;
                solve(b[t],s,t);
                s--;
                a[i] = tmp_a;
                b[i] = tmp_b;
            }
        }
    }
}
