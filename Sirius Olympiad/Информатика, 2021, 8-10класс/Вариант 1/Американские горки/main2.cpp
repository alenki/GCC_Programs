#include <iostream>
using namespace std;
int main()
{
	unsigned int h(0), n(0), INF(1e6), ans1(0), ans2(INF), h1(INF), i1(0), h2(INF), i2(0);
	cin >> n;
	for(int i = 1; i < (n+1); i++)
	{
		cin >> n;
		if(h==h2)
		{
			i2 = i;
		}
		else
		{
			if (h1 < h2 > h && i - i1 < ans2 - ans1)
			{
				ans1 = i1;
				ans2 = i;
			}
			h1 = h2;
			i1 = i2;
			h2 = h;
			i2 = i;
		}
	}
	if (ans1 == 0)
	{
		cout << "0";
	}
	else
	{
		cout << ans1 << ans2;
	}
}

