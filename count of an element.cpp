#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int fastOccurance(int ar[], int r, int x)
{
    int ans = -1;
    int l = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] == x)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (ar[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return ans;
}
int lastOccurance(int ar[], int r, int x)
{
    int ans = -1;
    int l = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] == x)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (ar[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return ans;
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
    int l = fastOccurance(ar, n - 1, x);
    int r = lastOccurance(ar, n - 1, x);
    if (l == -1)
        cout << "0\n";
    else
        cout << (r - l) + 1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}