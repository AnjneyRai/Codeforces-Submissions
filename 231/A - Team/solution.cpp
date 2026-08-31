#include <iostream>
using namespace std;
 
int main()
{
   int n,m,c,s;
   cin >> n;
   s=0;
   for (int i=0;i<n;i++)
   {  c=0;
      for(int j=0;j<3;j++)
      {
         cin >> m;
         if(m==1)
         {
            c++;
         }
      }
      if(c>=2)
 {
      s++;
   }     }
   cout << s;
   return 0;
}