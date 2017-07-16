#include<iostream>
using namespace std;
int Function2(int [],int);
int Function1(int [],int);
int main(){
int n;
cin>>n;
int b[100000],p,A[100000],B[100000];
for(int i=0;i<n;i++){
        cin>>p;
    for(int j=0;j<p;j++)
        cin>>b[j];

    A[i] = Function1(b,p);
    B[i] = Function2(b,p);
}
for(int i=0;i<n;i++){
    cout<<A[i]<<" "<<B[i]<<endl;
}
return 0;
}
int Function2(int a[],int n){
    int maxx = a[0],cmax[100000];
    for(int i=0;i<n;i++){
            cmax[i] = a[i];
        for(int j=0;j<i;j++){
            if((a[j]+cmax[i])>cmax[i]){
                cmax[i]+=a[j];
            }
        }
        if(cmax[i] > maxx){
            maxx = cmax[i];
        }
    }
    return maxx;
}
int Function1(int a[],int n){
    int cmax[100000],maxx=a[0];
    for(int i=0;i<n;i++){
            cmax[i] = a[i];
        for(int j=0;j<i;j++){
            if(cmax[i] + cmax[j] > cmax[i]){
                cmax[i]+=a[j];
            }else{
                cmax[i] = a[i];
                break;
                }
        }
        if(cmax[i] > maxx){
            maxx = cmax[i];
        }
    }
    return maxx;
}

//input
/*
6
1
1
6
-1 -2 -3 -4 -5 -6
2
1 -2
3
1 2 3
1
-10
6
1 -1 -1 -1 -1 5
*/
///expected output
/*
1 1
-1 -1
1 1
6 6
-10 -10
5 6
*/
