#include<iostream>
using namespace std;
int main(){
string s1,s="";
cin>>s1;
int vals[100000];
int low_bound[100000];
int l1,r1;
bool flag;
int ans =0;
int i=0;
for(int t=0,k=0;t<2*s1.length()-1;t++){
    if(t%2!=0){
        s+='$';
    }else{
        s+=s1[k];
        k++;
    }
}
for(int t=0;t<s.length();t++){
    low_bound[t] = t;
}
string Ans;
//cout<<s<<endl;
//cout<<endl;
while(i<s.length()){

    flag = false;
    vals[i] = 1;
    l1 = i-1;
    r1 = i+1;
    while(s[l1] == s[r1]){
        if(s[l1]!='$') vals[i]+=2;
                if(l1>= 0 and r1<=(s.length()-1)){
            l1--;
            r1++;
        flag = true;
        }
    }
    l1++;
    r1--;

    low_bound[i] = l1;
    if(vals[i] > ans) {
            string test;
            if(s[i]=='$') vals[i]--;
          test="";
            ans = vals[i];
        int L1=l1,R1=r1;
        for(;L1<=R1;L1++){
            if(s[L1]!='$')
            test+=s[L1];
        }
    Ans = test;
    }
    if(!flag){
        i++;
        continue;
    }
    if(l1 == 0 and r1 == s.length()-1) break;
    if(flag){
            int j=i;
            do{
                j++;
            }while(j<r1 and low_bound[i-(j-i)] > low_bound[i]);
        i = j;
        flag=false;
    }
}
/*for(int i=0;i<s.length();i++){
    cout<<i<<"  "<<low_bound[i]<<endl;
}*/
//cout<<vals[11]<<endl;
//cout<<ans<<endl;
cout<<Ans<<endl;
return 0;
}
