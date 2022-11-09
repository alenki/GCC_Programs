#include <iostream>
#include <vector>
using namespace std;
int main()
{
   short n;
   int ans = 0, r = 0;
   cin >> n;
   vector<int> vctr(n);
   for(short i = 0; i<n; i++)
   {
      cin >> vctr[i];
   }
   for(short i = 1; i<n; i++)
   {
      if(vctr[i] < vctr[i-1])
      {
         ans += vctr[i-1] - vctr[i];
         vctr[i] += vctr[i-1] - vctr[i];
      }
   }
   cout << ans;
}