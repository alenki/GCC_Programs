#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n, i(1), d(1), ans1(1), ans2(1), s(0), g, e, r;
    cin >> n;
    while(d<n)
    {
        i++;
        d = i*i;
    }
    s = ((i*2)-1);
    if(i%2==0)
    {
        if(n<(d-s/2))
        {
            ans2 = i;
            d = d-s+1;
            while(d!=n)
            {
                d++;
                ans1++;
            }
            cout << ans1 << " " << ans2;
        }
        else if(n>(d-s/2))
        {
            ans1 = i;
            while(d!=n)
            {
                d--;
                ans2++;
            }
            cout << ans1 << " " << ans2;
        }
        else
        {
            cout << i << " " << i;
        }
    }
    else if(i%2!=0)
    {
        if(n<(d-s/2))
        {
            ans1 = i;
            d -= s/2;
            ans2 = i;
            while(d!=n)
            {
                d--;
                ans2--;
            }
            cout << ans1 << " " << ans2;
        }
        else if(n>(d-s/2))
        {
            ans2 = i;
            while(d!=n)
            {
                d--;
                ans1++;
            }
            cout << ans1 << " " << ans2;
        }
        else
        {
            cout << i << " " << i;
        }
    }
    else
    {
        cout << "1";
    }
}