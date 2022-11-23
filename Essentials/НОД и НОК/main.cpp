//����������� � ������������� ���(�������� �������)
#include <iostream>
using namespace std;

//����������� ���������� ��������� �������
int recursive_gcd(int a, int b) {
    if (b == 0)
        return a;
    return recursive_gcd(b, a % b);
}
 
//������������� ���������� ��������� �������
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

