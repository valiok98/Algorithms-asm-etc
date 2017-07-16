#include<iostream>
using namespace std;
int main(){
    int k[] = {12,3,5,2,1,7,23,11};
for(int i=1,j=i-1;i<8;i++,j++){
    while(k[j]>k[i] and j>-1){
            j--;
    }
        swap(k[j],k[i]);
}
for(int i=0;i<8;i++){
    cout<<k[i]<<" ";
}
return 0;
}
