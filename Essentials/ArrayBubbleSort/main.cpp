#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int> list, int n)
{
    int n = list.size();
    bool unordered = true;
    while (unordered){
        unordered = false;
        for (int j = 0; j < n - 1; ++j){
            if (list[j] > list[j + 1]){
                swap(list[j], list[j + 1]);
                unordered = true;
            }
        }
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
    for(int i : vctr) cout << i << "\t";
    cout << endl << r;
}


