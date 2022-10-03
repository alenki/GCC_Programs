#include <iostream>
using namespace std;
int main()
{
    int a, b, c, time(0);
    cin >> a >> b >> c; //3 3 3
    while(a>0 && b>0 && c>0)
    {
        a--;
        b--;
        c--;
        time += 3;
        if(b>0)
        {
            b--;
            time++;
        }
    }
    cout << time;
}