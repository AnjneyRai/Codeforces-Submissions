#include <iostream>
#include <string>
using namespace std;
 
int main()
{
   int t,n;
   cin >>t;
   for(int i =0;i<t;i++)  //test cases
   {
      cin >> n;
      string s;
      cin >> s;
      n = s.size();
      int c=0;
      for(int j=0;j<n;j++) //counting empty cells
      {
        if(s[j]== '.')
        c++;
      }
      for(int k=0;k<n-2;k++) //checking three cons empty cells
      {
        if(s[k]=='.' && s[k+1]=='.'&& s[k+2]=='.')
        {
          cout << 2 <<'
';
          goto there;
        }
      }
      cout << c <<'
';
      there:
      ;
   }
   return 0;
}