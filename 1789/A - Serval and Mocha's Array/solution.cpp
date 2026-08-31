#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#include <algorithm>
int main()
{
  int t,n;
  cin>>t;
 
  for(int i=0;i<t;i++)
  { 
    cin >>n;
    vector<int> a(n);
    
    for(int j=0;j<n;j++)
    {
      cin >> a[j];
    }
  
  bool beautiful = false;
  for(int ai=0;ai<n;ai++)
  {
    for(int b=ai+1;b<n;b++)
    {
      if(std::gcd(a[ai], a[b])<= 2)
      {beautiful = true;
      
      break;}
    }
  if (beautiful)
  break;
  }
  if(beautiful)
  cout << "Yes
";
  else
  cout << "No
";
  }
  return 0;
}