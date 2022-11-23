//Рекурсивный и нерекурсивный НОД(Алгоритм Евклида)
#include <iostream>
using namespace std;

//Рекурсивная реализация алгоритма Евклида
int recursive_gcd(int a, int b) {
    if (b == 0)
        return a;
    return recursive_gcd(b, a % b);
}
 
//Нерекурсивная реализация алгоритма Евклида
int gcd(int a, int b) {
    while (b > 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}


int main()
{
	long long a=0, b=0;
	cin >> a >> b;
	cout << recursive_gcd(a, b);
}

