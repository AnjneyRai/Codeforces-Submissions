#include <iostream>
using namespace std;
 
int main()
{
   int count=0;int n;
   
   for(int i=1;i<6;i++)
   {
     for(int j=1;j<6;j++)
     {
       cin >> n;
       
       if(n==1)
       {
           while(i<3)
           {i++;count++;}
           while(i>3)
           {i--;count++;}
           
           while(j<3)
           {j++;count++;}
           while(j>3)
           {j--;count++;}
           
              cout << count;
   return 0;
 
       }
     }
   }
}