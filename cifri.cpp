#include<iostream>
using namespace std;
int main(){
unsigned long long int a[3];
short int b[3],shots[3];
for(int i=0;i<3;i++)
{
    cin>>a[i]>>b[i]>>shots[i];
    if(shots[i] == 4){
            if(b[i]>=30){
                    a[i]++;
                    b[i]=30 - (60-b[i]);
            }else{
            b[i]+=30;
            }
    }
    if(shots[i] == 3) a[i]+=1;
        if(shots[i] == 2) {
                a[i]+=1;
                if(b[i]>=30){
                    a[i]++;
                    b[i]=30 - (60-b[i]);
            }else{
            b[i]+=30;
            }
        }
        if(shots[i] == 1) a[i]+=2;
        if(shots[i] == 0) {
                a[i]+=2;
        if(b[i]>=30){
                    a[i]++;
                    b[i]=30 - (60-b[i]);
            }else{
            b[i]+=30;
            }
        }

}
if(a[0]<a[1] and a[0]<a[2]) cout<<a[0]<<" "<<b[0]<<" A";
if(a[1]<a[0] and a[1]<a[2]) cout<<a[1]<<" "<<b[1]<<" B";
if(a[2]<a[0] and a[2]<a[1]) cout<<a[2]<<" "<<b[2]<<" C";
if(a[0]==a[1] and a[0]<a[2] and b[0]<b[1]) cout<<a[0]<<" "<<b[0]<<" A";
if(a[0]==a[1] and a[1]<a[2] and b[1]<b[0]) cout<<a[1]<<" "<<b[1]<<" B";
if(a[0]==a[2] and a[2]<a[1] and b[2]<b[0]) cout<<a[2]<<" "<<b[2]<<" C";
if(a[0]==a[2] and a[0]<a[1] and b[0]<b[2]) cout<<a[0]<<" "<<b[0]<<" A";
if(a[2]==a[1] and a[2]<a[0] and b[2]<b[1]) cout<<a[2]<<" "<<b[2]<<" C";
if(a[2]==a[1] and a[1]<a[0] and b[1]<b[2]) cout<<a[1]<<" "<<b[1]<<" B";
if(a[0]==a[1]==a[2] and b[0]<b[1] and b[0]<b[2]) cout<<a[0]<<" "<<b[0]<<" A";
if(a[0]==a[1]==a[2] and b[1]<b[0] and b[1]<b[2]) cout<<a[1]<<" "<<b[1]<<" B";
if(a[0]==a[1]==a[2] and b[2]<b[0] and b[2]<b[1]) cout<<a[2]<<" "<<b[2]<<" C";
/*cout<<a[0]<<" "<<b[0]<<" A"<<endl;
cout<<a[1]<<" "<<b[1]<<" B"<<endl;
cout<<a[2]<<" "<<b[2]<<" C"<<endl;
*/
return 0;

}
