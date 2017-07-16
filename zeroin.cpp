#include<iostream>
#include<vector>
using namespace std;
int main(){
int q,n,s;
bool answers[10000];
cin>>q;
for(int i=0;i<q;i++){
    vector<bool> A;
    bool winner = true;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>s;
        A.push_back(s);
    }
    int j =0;
    while(j<A.size()){
        if(A[j] == 0 and A[j+2]== 0){
            A.erase(A.begin() + j+1);
            if(winner) winner = false;
            else winner = true;
            if(j-1 >=0) j--;
            continue;
        }
        j++;
    }
    if(winner) answers[i] = 1;
    else answers[i] = 0;
}
for(int i=0;i<q;i++){
    if(answers[i]) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
}
return 0;
}
