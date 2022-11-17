#include <iostream>
using namespace std;
int main()
{
	int n = 0, a = 0, b = 0, d = 0, ans=0, h1=0 , h2=0, h3=0;
	cin >> a >> b >> d;
	if(a>b) swap(a, b);
	// h1 == h2
	// else: (h1+h2)min && h1 closer to h2, minh3
	if(abs(b-a)%2==0)
	{
		h1 = ((a+b)/2)/d;
		if((((a+b)/2)%d)>(h1*d+d)-ans) h1 = (h1*d+d)-ans;
		else h1 = ((a+b)/2)%d;
		cout << (a+b)/2 << " " << h1;
	}
}
