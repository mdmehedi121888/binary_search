#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int binarySearch(int ar[], int n, int x)
{
	int l = 0, r = n;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (ar[mid] == x)
			return ar[mid];
		else if (ar[mid] > x)
			r = mid - 1;
		else
			l = mid + 1;
	}
	if (r < 0)
		return ar[l];
	else if (l > n)
		return ar[r];
	else if (abs(ar[l] - x) > abs(ar[r] - x))
		return ar[r];
	else
		return ar[l];
}
void solve()
{
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; ++i)
		cin >> ar[i];
	int x;
	cin >> x;
	cout << binarySearch(ar, n - 1, x);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}