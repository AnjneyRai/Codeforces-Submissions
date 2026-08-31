#include <iostream>
using namespace std;
 
int main()
{
   int n,t,x;
   x=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {
      cin>>n;
      if (n<10)
      {  x=0;
         for(int j=0;j<n;j++)
         {  
            x++;
         }
         cout << x<<'
';
      }
      else if (n<100)
      {
         x = 9 + n/10;
         cout << x<<'
';
      }
      else if (n<1000)
      {
         x = 9 + 9 + n/100;
         cout << x<<'
';
      }
      else if (n<10000)
      {
         x = 9 + 9 + 9 + n/1000;
         cout << x<<'
';
      }
      else if (n<100000)
      {
         x = 9 + 9 + 9 + 9 + n/10000;
         cout << x<<'
';
      }
      else if (n<1000000)
      {
         x = 9 + 9 + 9 + 9 + 9 + n/100000;
         cout << x<<'
';
      }
   }
   return 0;
}