#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main()
{
int N,lowest;
lowest = 0;
cin>>N;
vector<int> arr(N);
for(int i=0;i<N;i++)
{
   cin >> arr[i];
   while(i==0)
   {
   lowest = abs(arr[0]);
   break;
   }
   if(arr[i] == 0)
   {
     cout << 0;
     return 0;
   }
    while (i>0)
    {
        if(abs(arr[i]) < lowest)
        {           
            lowest = abs(arr[i]); 
            break;
        }
       break;
    }   
}
cout << lowest;
return 0;
}