#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("output.txt");
int n,k;
cin>>n>>k;
unsigned int a[100000];
for(unsigned int i=0;i<n;i++){
    cin>>a[i];
}
unsigned int max = 0,maxj;
for(unsigned int i=0;i<k;i++){
    for(unsigned int j=i;j<n;j++){
        if(a[j] > max){
            max = a[j];
            maxj = j;
        }
    }
    swap(a[i],a[maxj]);
    max = 0;
}
for(unsigned int i=0;i<n;i++){
    myfile<<a[i]<<" ";
}
myfile.close();
return 0;
}
