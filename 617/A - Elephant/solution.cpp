#include <iostream>
using namespace std;
int main()
{
  int x,y,z;
  cin >> x;
  if(x==1)
  {
  cout <<1;
  }
  else if (x==2)
  {cout<<1;}
  else if(x==3)
  {cout << 1;}
  else if (x==4)
  {cout << 1;}
  else if(x>=5)
  {
     
  y = x%5;
  z = x/5;
  if(y==0)
  {
     cout << z;
  }
  else if(y==4)
  {  
   cout <<z+1;
  }
  else if(y==3)
  { 
     cout << z+1;
  }
  else if(y==2)
  {
     cout << z+1;
  }
  else if(y==1)
  {
     cout <<z+1;
  }
  
}
}