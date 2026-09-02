#include <iostream>
using namespace std;
#include <vector>
int main()
{
int t,n;
cin >> t;
for(int i=0;i<t;i++) //no of test cases
{ int count=0;int indexCal=0;
  cin >> n;          //no of elements in each test case
  vector<int>data(n);
  for(int j = 0;j<n;j++)
  {
    cin >> data[j];  //taking input of elements of each case
    if(data[j]==2)
    {
      count++;    //counting no of 2s
    }
  }
 
if(count%2 != 0)   
{
  cout << "-1"<< '
';
  continue;
}
 
if(count == 0)
{
cout << 1 << '
';
continue;
}
 
for(int k=0;k<n;k++)   //finding minimum k if any 2s exist
{
  if(data[k]==2)
  indexCal++;
  
  if(indexCal==count/2)
  {
  cout << k+1 << '
';
  break;
  }
}
 
 
}
return 0;
 
}