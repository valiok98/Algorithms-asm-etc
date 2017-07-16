#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

int children;
int sum=0;

cin >> children;
int ratings[children];
int candies[children];

//give all children 1 candy to start
for(int i=0;i<children;++i)
{
     cin >> ratings[i];
     candies[i] = 1;
}

//if the current child has a better rating than the child
//before him he is entitled to +1 greater candy than that child
for(int i=1;i<children;++i)
{
     if(ratings[i] > ratings[i-1])
         candies[i] = candies[i-1]+1;
}

// work backwards to break any discrepancies ex.
// rating[5,4,3] -> candies[1,1,1] -> candies [1,1,1] -> candies [3,2,1]
// starting ratings  give everyone 1   first loop         second loop
for(int i=children-1;i>=0;--i)
{
     if(ratings[i] > ratings[i+1])
     {
          candies[i] = max(candies[i],candies[i+1]+1);
     }
}

for(int i=0;i<children;++i)
{
     sum+=candies[i];
}

cout << sum;
return 0;
}
