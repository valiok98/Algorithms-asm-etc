#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
int main(){
        ofstream myfile;
    myfile.open("output.txt");
int t;
cin>>t;
vector<unsigned int>A;
vector<unsigned int>B;
unsigned int n,m,s;
for(unsigned int i=0;i<t;i++){
    vector<unsigned int> a;
    cin>>n>>m;
    for(unsigned int j=0;j<m;j++){
        cin>>s;
        a.push_back(s);
    }
    unsigned int p;
    for(unsigned int j=0;j<m;j++){
        p=j+1;
        while((a[j]+a[p])!=n and p<m)
            p++;

        if((a[j]+a[p])==n){
            A.push_back(j+1);
            B.push_back(p+1);
            break;
        }
    }
}
for(unsigned int i=0;i<A.size();i++){
    myfile<<A[i]<<" "<<B[i]<<endl;
}
return 0;
}
