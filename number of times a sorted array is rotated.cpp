#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int binarySearch(int ar[], int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;
        if (ar[mid] <= ar[next] && ar[mid] <= ar[prev])
            return mid;
        else if (ar[mid] <= ar[n - 1])
            r = mid - 1;
        else
            l = mid + 1;
    }
}
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; ++i)
        cin >> ar[i];
    cout << binarySearch(ar, n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}