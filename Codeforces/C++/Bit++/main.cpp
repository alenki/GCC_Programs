#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i(0);
    string x;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(x[0] == '+' || x[1] == '+')
        {
            ++i;
        }
        else
        {
            --i;
        }
    }
    cout << i << endl;
}