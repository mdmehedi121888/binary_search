// bitonic array must have >=3 length
// firstly monotonic increasing and then monotonic decreasing
// 1 2 3 4 3 2 1
// 4 is the only peak element
int peakValue(int ar[], int r)
{
    int l = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] > ar[mid - 1] && ar[mid] > ar[mid + 1])
            return ar[mid];
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
    cout << peakValue(ar, n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}