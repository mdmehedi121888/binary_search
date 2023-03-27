// row wise and column wise must be sorted...
// arr[r][c]  = 10 20 30 40 50
//             15 25 35 45
//             16 26 36 46
// start point always 50 theke suru hobe
// r=0 & c-1 theke start

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int binarySearch(vector<vector<int>> v, int r, int c, int x)
{
    int i = 0, j = c - 1;
    while ((i >= 0 && i < r) && (j >= 0 && j < c))
    {

        if (v[i][j] == x)
            return x;
        else if (v[i][j] > x)
            --j;
        else
            ++i;
    }
    return -1;
}
void solve()
{
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
    int x;
    cin >> x;
    cout << binarySearch(v, r, c, x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}