#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void Minotaur(char [][100],int,int);
bool isSafe(char [][100],int,int);
void Print();
int n,m;
bool IJ[100][100];
int main(){
memset(IJ,0,sizeof(IJ));
char a[100][100];
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
Minotaur(a,0,0);
return 0;
}
bool isSafe(char a[][100],int i,int j){
    if(a[i][j] == 'x') return false;
    if(i < 0 || i >=n || j < 0 || j >=m) return false;
    if(IJ[i][j]) return false;
    else if(a[i][j] == 'c') return true;
}
void Print(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(IJ[i][j]){
                cout<<"The I: "<<i<<"The J: "<<j<<endl;
            }
        }
    }
    cout<<"\n";
}
void Mark(int i,int j){
    IJ[i][j] = true;
}
void Unmark(int i,int j){
    IJ[i][j] = false;
}
void Minotaur(char a[][100],int i,int j){

    if(a[i][j] == 'e'){
        Print();
    }else{
        if(isSafe(a,i,j)){
                Mark(i,j);
                Minotaur(a,i+1,j);
                Minotaur(a,i,j+1);
                Minotaur(a,i-1,j);
                Minotaur(a,i,j-1);
                Unmark(i,j);
        }
    }
}
/*
3
3
c c x
x c x
x c e
*/
