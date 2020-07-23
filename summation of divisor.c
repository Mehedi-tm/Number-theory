#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int sol(ll n)
{
	ll x = n;
	int sum = 1;

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			int s = 1;
			int j = 1;
			while (n % i == 0) {
				s += pow(i, j);
				n /= i;
				j++;
			}
			sum *= (s);
		}
	}

	if (n > 1)sum *= (1 + n);

	return sum - x;
}
int main()
{
	int t;
	cin >> t;
	ll n;

	while (t--)
	{
		cin >> n;
		cout << sol(n) << endl;
	}
	return 0;
}
