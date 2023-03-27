#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int binarySearchRightPortion(int ar[], int l, int r, int x)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] == x)
            return mid;
        else if (ar[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int binarySearchLeftPortion(int ar[], int l, int r, int x)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] == x)
            return mid;
        else if (ar[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int minimumElementIndex(int ar[], int n)
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
    int x;
    cin >> x;
    int mid = minimumElementIndex(ar, n);
    int ans = binarySearchLeftPortion(ar, 0, mid - 1, x);
    if (ans != -1)
        cout << ans << endl;
    else
    {
        int ans = binarySearchRightPortion(ar, mid + 1, n - 1, x);
        if (ans != -1)
            cout << ans << endl;
        else
            cout << "-1\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}