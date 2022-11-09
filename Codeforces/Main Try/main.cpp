#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int> &a, int &r)
{
    int n = a.size();
    r = 0;
    bool unordered = true;
    while (unordered){
        unordered = false;
        for (int j = 0; j < n - 1; ++j){
            if (a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                unordered = true;
            }
        }
        r++;
        --n;
    }
}
int main()
{
    int n; // Size of array.
    int r = 0; // Iterations.
    cin >> n;
    vector<int> vctr(n);
    for(int i = 0; i<n; i++) cin >> vctr[i];
    bubble_sort(vctr, r);
    cout << r;
}


