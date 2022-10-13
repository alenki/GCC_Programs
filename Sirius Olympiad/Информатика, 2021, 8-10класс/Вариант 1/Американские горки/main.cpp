#include <iostream>
using namespace std;
int main()
{
	unsigned int N, h;
	int d1(0), num1(0), num2(0), gym1(0), gym2(0);
	cin >> N;
	for(int i = 0; i<N; i++)
	{
		cin >> h;
		if(i==0)
		{
			d1 = h;
			continue;
		}
		if(h>=d1)
		{
			num1 = i+1;
			while(h>=d1)
			{
				d1 = h;
				i++;
				cin >> h;
				if(h<d1)
				{
					num2 = i;
				}
				if(i>=N)
				{
					num2 = N;
					continue;
				}
			}
		}
		else if(h<d1)
		{
			h = d1;
			continue;
		}
		if(gym1, gym2 == 0)
		{
			num1 = gym1;
			num2 = gym2;
		}
		else if(num2 > 0 && (num2-num1)<(gym2-gym1))
		{
			num1 = gym1;
			num2 = gym2;
		}
	}
	if(gym1, gym2 != 0)
	{
		cout << gym1 << gym2;
	}
	else
	{
		cout <<"0";
	}
}
