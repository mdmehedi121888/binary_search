#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int floorValue(vector<int> &v, int r, int x)
{
    int l = 0, ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid] == x)
            return mid;
        else if (v[mid] < x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int x;
    cin >> x;
    cout << floorValue(v, n - 1, x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}