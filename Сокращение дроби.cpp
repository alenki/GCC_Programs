#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll gcd(ll a,ll b ){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	ll d,c;
	cin>>d>>c;
	ll b = gcd(d,c);
	cout<<d/b<<" "<<c/b;
}
