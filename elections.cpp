#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int a,b;
int A[10000];
double B[10000];
cin>>a>>b;
for(int i=0;i<b;i++){
    cin>>A[i];
}
int k=0;
    for(int j=1;j<=a;j++){
        for(int i=0;i<b;i++){
        if(A[i] == j){
            k++;
        }
    }
    B[j-1] = k/double(b);
    B[j-1]*=100;
    k=0;
}
int s;
for(int i=0;i<a;i++){
      s=B[i];
      if(B[i]-s != 0 && B[i]>10){
    cout<<setprecision(4)<<B[i]<<"%"<<endl;
}else if(B[i]-s != 0 && B[i] < 10){
        cout<<setprecision(3)<<B[i]<<"%"<<endl;
}else{
    cout<<B[i]<<".00%"<<endl;
}
}
return 0;
}
