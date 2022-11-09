#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, i, p, d, n;
    cin >> m >> n;
    vector<int> num_storage1(n);
    vector<int> num_storage2(n);
    vector<string> word_storage(n);
    for(int x = 1; x <= n; x++)
    {
        cin >> num_storage1[x] >> num_storage2[x] >> word_storage[x];
    }
    cout << num_storage1[1];
    return 0;
}