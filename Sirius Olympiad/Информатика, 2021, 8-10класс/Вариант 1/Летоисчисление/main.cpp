#include <iostream>
using namespace std;

int main()
{
	int a, n, ans(0);
	cin >> a >> n; //12, -14
	if(n>0)
	{
		ans = a+n;
	}
	else if(n<0)
	{
		n *= -1;
		ans = a-n;
	}
	cout << ans;
}
