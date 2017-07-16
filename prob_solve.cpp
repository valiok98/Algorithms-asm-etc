#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <char> a;
string A;
cin>>A;
for(int i=0;i<A.length();i++){
    a.push_back(A[i]);
}
int low=0,ctr=1;
    while(low<a.size()){
                while(a[low] == a[low+1]){
            a.erase(a.begin(),a.begin() +1);

            if(a.empty()){
            cout<<"Empty"<<endl;
            break;
           }
        }


    }

    for(int j=0;j<a.size();j++){
    cout<<a[j];
}

return 0;
}
