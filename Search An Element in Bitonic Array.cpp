// bitonic array must have >=3 length
// firstly monotonic increasing and then monotonic decreasing
// 1 2 3 4 3 2 1
// 4 is the only peak element
// peak value er index find korte hobe then peak value er left side a sorting and right side o sorting
// left side and right side both side a binary search  operation chalate hobe...
int reverseBinarySearch(int ar[], int l, int r, int x)
{
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (ar[mid] == x)
			return ar[mid];
		else if (ar[mid] > x)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}
int binarySearch(int ar[], int l, int r, int x)
{
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
	return -1;
}
int peakValueIndex(int ar[], int r)
{
	int l = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (ar[mid] > ar[mid - 1] && ar[mid] > ar[mid + 1])
			return mid;
		else if (ar[mid - 1] > ar[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; ++i)
		cin >> ar[i];
	int x;
	cin >> x;
	int mid = peakValueIndex(ar, n - 1);
	if (mid < 0)
		cout << "peak value is not present !!";
	else
	{
		int y = binarySearch(ar, 0, mid - 1, x);
		if (y < 0)
		{
			cout << reverseBinarySearch(ar, mid + 1, n - 1, x);
		}
		else
			cout << y << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}