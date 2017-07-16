#include<iostream>
using namespace std;
void perm_no_rp(int [],int);
bool contains(int [],int);
void Print(int []);
int main(){
int a[] = {1,2,2,2,2};
perm_no_rp(a,0);
return 0;
}
void perm_no_rp(int a[],int index){
    if(index >=5){
        Print(a);
        return;
    }else{
        int g[10];
        for(int i=index;i<5;i++){
            if(!contains(g,a[i])){
                    g[a[i]] = a[i];
                swap(a[i],a[index]);
                perm_no_rp(a,index+1);
                swap(a[i],a[index]);

            }
        }
    }

}
bool contains(int a[],int value){
    if(a[value]==value) return true;
    else return false;
}
void Print(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
