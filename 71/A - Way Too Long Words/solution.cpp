#include <iostream>
using namespace std;
#include<string>
 
int main()
{
   int n;string w;int l;
   
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>w;  
      l=w.length();
      if(l<=10)
   {
      cout<<w<<'
';
   }
   else
   {     
      cout << w[0]<<l-2<<w[l-1]<<'
';
   }
   }
   return 0;
}