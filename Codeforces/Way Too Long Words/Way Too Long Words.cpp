#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, num;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		string st;
		cin >> st;
		num = st.size();
		if(num <= 10)
		{
			cout << st << endl;
		}
		else
		{
			cout << st[0] << num-2 << st[num-1] << endl;
		}
	}
	return 0;
}
