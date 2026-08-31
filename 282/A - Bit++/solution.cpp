#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int x = 0;int n;string expression;
  cin >> n;
  for (int i = 0; i <n ; i++)
  {
     cin >> expression;
     
     if (expression == "++X" || expression == "X++")
     { 
        x = x+1;
     }
     else
     {
        x = x-1;
     }
  }
   cout << x;
   return 0;
}   