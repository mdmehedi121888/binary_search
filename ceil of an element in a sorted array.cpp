#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x;
	cin >> x;
	vector<int> v(n);
	for (auto &i : v)
		cin >> i;

	int l = 0, r = n - 1, temp = -1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (v[mid] == x)
		{
			temp = mid;
			break;
		}
		else if (v[mid] > x)
		{
			// temp = min(temp,mid);
			temp = mid;
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	cout << temp << endl;
}
