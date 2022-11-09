#include <iostream>
#include <string>
using namespace std;
int main()
{
    short n, a, b, c, i(0);
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c;
        if(a+b+c >= 2)
        {
            i++;
        }
    }
    cout << i << endl;
}