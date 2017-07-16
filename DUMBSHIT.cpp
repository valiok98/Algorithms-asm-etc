#include<iostream>
using namespace std;
int main(){
char a[10];
for(int i=0;i<10;i++){
    a[i] = '0';
}
int i=9;
int counter =0;
while(counter <= 1000){
    counter++;
        for(int s=6;s<10;s++){
    cout<<a[s];
}
cout<<endl;
    while(a[i] == '9'){
        a[i] = '0';
        i--;
    }
    a[i]++;
    i=9;
}

return 0;
}
