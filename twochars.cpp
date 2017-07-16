#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int lngslt = 0;
int cur_lng =0;
int cur_ = -1;
for(int i=0;i<25;i++){
    for(int j=i+1;j<26;j++){
        for(int p=0;p<n;p++){
            if((s[p]-'a') == i){
                if(cur_ == 1){
                    cur_ = -1;
                    break;
                }
                cur_ = 1;
                cur_lng++;
            }else if((s[p]-'a') == j){
                if(cur_ == 2){
                    cur_ = -1;
                    break;
                }
                cur_ = 2;
                cur_lng++;
            }
        }
        if(cur_ != -1 and cur_lng > lngslt and n>1)
            lngslt = cur_lng;
        cur_ = -1;
        cur_lng = 0;
    }
}
cout<<lngslt<<endl;
return 0;
}
