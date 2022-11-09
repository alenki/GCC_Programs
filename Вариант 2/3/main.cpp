#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n(0), d(0), r(0), e(0);
    cin >> n;
    vector<int> GEL(n);
    vector<int> ans(n);
    for(int i = 0; i<n; i++)
    {
        cin >> GEL[i];
    }

    for(int i = 0; i<n-1; i++)
    {
        r = i;
        d = GEL[i];
        while(r--)
        {
            if(GEL[r] == GEL[i]) continue;
            d += GEL[r];
        }
        if(GEL[i+1]<d)
        {
            ans[i] = 1;
        }
        else if(GEL[i+1]>d)
        {
            ans[i] = 0;
        }
    }
    ans[n-1] = 1;
    ans[0] = 0;
    for(int i = 0; i<n; i++)
    {
        cout << ans[i] << endl;
    }
}