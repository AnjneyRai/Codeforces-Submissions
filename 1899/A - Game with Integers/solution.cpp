#include <iostream>
using namespace std;
 
int main()
{
  int t,n;
  cin >> t;
  for(int i=0;i<t;i++)
  {
    cin >> n;
    if (n%3 == 1 || n%3 == -1 ||n%3 == 2 || n%3 == -2)
    cout << "First
";
    
    else
    cout << "Second
";
  }
}