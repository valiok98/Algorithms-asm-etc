#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
getline(cin,s);
bool low_case[26],upp_case[26];
for(int i=0;i<s.length();i++){
    if(int(s[i]) >=65 and int(s[i])<=90){
     upp_case[int(s[i])-65] = true;
}
    else if(int(s[i]) >=97 and int(s[i])<=122){
     low_case[int(s[i])-97] = true;
    }
}
string ans = "pangram";
for(int i=0;i<26;i++){
    if(!low_case[i] and !upp_case[i]){ ans="not pangram"; break; }
}
cout<<ans<<endl;
return 0;
}
