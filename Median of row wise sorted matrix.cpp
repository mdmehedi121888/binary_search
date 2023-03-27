#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int equalAndSmallerToMid(vector<int> v, int midValue)
{
    int l = 0, h = v.size() - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (v[mid] <= midValue)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return l;
}
void solve(vector<vector<int>> &v, int r, int c)
{
    int low = 1, high = 1e9;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int cnt = 0;
        for (int i = 0; i < r; ++i)
        {
            cnt += equalAndSmallerToMid(v[i], mid);
        }
        if (cnt <= (r * c) / 2)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << low << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r);
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    solve(v, r, c);
}