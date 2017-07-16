#include<iostream>
using namespace std;
void variation(int [],int,int);
void Print(int [],int);
int main(){
    int a[100];
    int sizee;
    cin>>sizee;
variation(a,sizee,0);
return 0;
}
void variation(int a[],int sizee,int index){

    if(index >= sizee){
        Print(a,sizee);
    }
    else{
        for(int i=0;i<sizee;i++){
            a[index] = i;
            variation(a,sizee,index+1);
        }
    }
}
void Print(int a[],int sizee){
    for(int i=0;i<sizee;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
