#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[100][100];
int i=0,j=n-1;
int J=n-1,counter=1;
a[0][n-1] = counter;
///upper
do{
    J--;
    j = J;
    i=0;
    do{
            counter++;
        a[i][j]=counter;
        i++;
        j++;
    }while(j!=n);
}while(J!=0);
///lower
int I=0;
do{
    j=0;
    I++;
    i=I;
do{
    counter++;
    a[i][j]=counter;
    i++;
    j++;
}while(i!=n);
}while(I!=n-1);
for(int p=0;p<n;p++){
    for(int k=0;k<n;k++){
        cout<<a[p][k]<<" ";
    }
    cout<<endl;
}
return 0;
}
