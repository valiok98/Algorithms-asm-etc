#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string solve(string);
string func(string);
int carry=0;
int main() {
    int n;
    string ans[10];
    string q[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q[i];
        string tmp = solve(q[i]);
        if(tmp.length()!=0){
            ans[i]="YES ";
            ans[i]+=(tmp);
        }else{
            ans[i] = "NO";
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
string solve(string s){
    string tmp1 = "",tmp="",tmp2;
    while(true){
    for(int i=0;i<s.length()/2;i++){
        tmp1+=s[i];
        tmp2 = tmp1;
        tmp = tmp1;
        while(tmp1.length() < s.length()){
                string k = func(tmp);
                tmp1+=k;
                tmp = k;
        }
        if(tmp1 == s){
            return tmp2;
        }
        tmp = "";
        tmp1 = tmp2;
    }
    return "";
    }
}
string func(string a){
char ss[17];
string ss1="";
for(int i=0;i<17;i++){
    ss[i] = '0';
}
int k =16;
for(int i=a.length()-1;i>=0;i--,k--){
    ss[k] = a[i];
}
int j=16;
    while(ss[j] == '9'){
        ss[j] = '0';
        j--;
    }
    ss[j]++;
    j=16;
    int new_len;
    for(int i=0;i<17;i++){
    if(ss[i]!='0'){
        new_len = i;
        break;
    }
    }
    for(int i=new_len,p=0;i<17;i++,p++){
    ss1+=ss[i];
    }
    return ss1;
}
