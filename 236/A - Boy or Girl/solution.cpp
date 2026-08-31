#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
  string ch;      
  int d=0;
  cin >> ch;
  
  sort(ch.begin(), ch.end());
  
  int s = ch.length();
  for(int i=0;i<s-1;i++)
  {
    if(ch[i]!=ch[i+1])
    {
      d++;
    }
  }
  if(ch[0]!=ch[s-1])
  d++;
  if(d%2 == 0)
  cout << "CHAT WITH HER!";
  
  else
  cout << "IGNORE HIM!";
  
  
  return 0;
}