#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x;
	cin >> n;
	vector<int> v(n);
	for (auto &i : v)
		cin >> i;
	int l = 0, r = 1, temp = -1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (v[mid] == 1)
		{
			temp = mid;
			r = mid - 1;
			if (mid == 0 || v[mid - 1] == 0)
				break;
		}
		if (v[r] == 0)
		{
			l = r;
			r = r * 2;
		}
		else if (v[mid] > 1)
		{
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	cout << temp << endl;
}
