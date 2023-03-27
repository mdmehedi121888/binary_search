#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<char> v(n);
	for (auto &i : v)
		cin >> i;
	char x;
	cin >> x;
	int l = 0, r = n - 1, temp = INT_MAX;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (v[mid] == x)
		{
			l = mid + 1;
		}
		else if (v[mid] > x)
		{
			temp = min(temp, mid);
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	if (temp > n)
		cout << "not found\n";
	else
		cout << temp << endl;
}
