#include <iostream>
using namespace std;
int main()
{
	int l, n, d, j(0), r(0), num(0), dos(0);
	cin >> l >> n;
	for(short i = 0; i<n; i++)
	{
		cin >> d;
		if(d==1)
		{
			if(i==n-1)
			{
				dos++;
				continue;
			}
			j++;
			num++;
			if(j==l)
			{
				dos++;
				j = 0;
				num = 0;
			}
		}
		else if(d==0)
		{
			if(i==n-1 && num>0)
			{
				dos++;
				continue;
			}
			else if(i==n-1 && num<=0)
			{
				continue;
			}
			if(num == 0)
			{
				continue;
			}
			if(j==l)
			{
				dos++;
				j = 0;
				num = 0;	
			}
			else
			{
				j++;
				if(j==l)
				{
					dos++;
					j = 0;
					num = 0;
				}
			}
		}
	}
	cout << dos;
}
