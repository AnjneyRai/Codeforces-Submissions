#include <iostream>
using namespace std;
 
int main()
{
 
 int t,n,e;
       cin >> t;
 for(int i=0;i<t;i++)
{ int s=0;
  cin >> n;
  for(int j=0;j<n-1;j++)
  {
    cin >> e;
    s =s+e;
  }
  cout << s * -1 << '
';
}
 
return 0;
}