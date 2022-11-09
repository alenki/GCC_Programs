#include <iostream>
using namespace std;

int main()
{
	
	int i;
	cin >> i;
	
	for(;i <= 100; i++)
	{
		if(i % 3 == 0)
		{
			cout << "Fizz\n";
		}
		else if(i % 5 == 0)
		{
			cout << "Buzz\n";
		}
		else if(i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz\n";
		}
		else
		{
			cout << i;
		}
	}
	
	return 0;
}
