//By AnjneyRai, contest: Codeforces Round 893 (Div. 2), problem: (A) Buttons, Accepted, #, Copy
#include <iostream>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
  for(int i=0;i<t;i++)
  {
    int a,b,c;
    cin >> a >> b >> c;
    if(c%2 != 0)
    {
      b = b-1;
    }
    if(a == b)
    {
      cout << "Second" << '\n';
    }
    else if(a > b)
    {
      cout << "First" << '\n';
    }
    else
    {
      cout << "Second" << '\n';
    }
  }
  return 0;
}
