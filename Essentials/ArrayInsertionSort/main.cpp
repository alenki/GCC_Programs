#include <iostream>
#include <vector>
using namespace std;
void insertion_sort(vector<int> &a)
{
    for(int i = 1; i<a.size(); i++)
    {
        int temp = a[i];
        int j = i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j-=1;
        }
        a[j+1] = temp;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> leg(n);
    for(int i = 0; i<n; i++) cin >> leg[i];
    insertion_sort(leg);
    for(int i = 0; i<n; i++) cout << leg[i] << " ";
}