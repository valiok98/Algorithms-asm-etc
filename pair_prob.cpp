#include<iostream>
#include<algorithm>
using namespace std;
int main(){
pair <int,char> p[10];
for(int i=0;i<10;i++){
p[i].first = 9 - i;
p[i].second = (char)i;
}
for(int i=0;i<10;i++){
    cout<<p[i].first<<" "
    <<p[i].second<<endl;
}
sort(p,p+10);
for(int i=0;i<10;i++){
    cout<<p[i].first<<" "
    <<p[i].second<<endl;
}
return 0;
}
