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
    cout << binary_search(ar, ar + n, x) << endl;
    cout << lower_bound(ar, ar + n, x) - ar << endl;
    cout << upper_bound(ar, ar + n, x) - ar << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}