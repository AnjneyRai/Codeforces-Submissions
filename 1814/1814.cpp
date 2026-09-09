//By AnjneyRai, contest: Educational Codeforces Round 146 (Rated for Div. 2), problem: (A) Coins, Accepted, #, Copy
#include <iostream>
using namespace std;
 
int main()
{
  long long t;
  cin >> t;
  
  for(int i=0;i<t;i++)  //running test cases loop
  {
    long long n,k;
    cin >> n >> k;
    
    if((n%k==0 || n%2 == 0) || (n-k)%2 ==0)
    {
      cout << "YES" << '\n';
    }
    else
      cout << "NO" << '\n';
  }
  
  return 0;
}
