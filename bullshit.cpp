#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    string A[10];
    A[1] = "one";
    A[2] = "two";
    A[3] = "three";
    A[4] = "four";
    A[5] = "five";
    A[6] = "six";
    A[7] = "seven";
    A[8] = "eight";
    A[9] = "nine";
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<A[i]<<endl;
        }else{
        if(i%2==0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    }
    return 0;
}
