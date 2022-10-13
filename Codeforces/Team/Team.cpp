#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int fin = 1;
	for(int i = 0; i<n; i++)
	{
		string num;
		cin >> num;
		if((num[0] == 1 && num[1] == 1) || (num[0] == 1 && num[2] == 1) || (num[1] == 1 && num[2] == 1) || (num[1] == 1 && num[2] == 1 && num[0] == 1))
		{
			fin++;
		}
	}
	cout << fin-1 << endl;
}
