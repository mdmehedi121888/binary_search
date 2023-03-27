// three condition
// every student must have 1 book
// a book is not divided
// student must have contiguious allocate to book..
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isPossible(int barrier, int n, int k, int ar[])
{
    int pages = 0, student = 1;
    for (int i = 0; i < n; ++i)
    {
        if (ar[i] + pages > barrier)
        {
            ++student;
            pages = 0;
            pages += ar[i];
            if (student > k)
                return false;
        }
        else
            pages += ar[i];
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    int sum = 0, mn = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        cin >> ar[i];
        sum += ar[i];
        if (mn > ar[i])
            mn = ar[i];
    }
    int k;
    cin >> k;
    int l = mn, r = sum, ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isPossible(mid, n, k, ar))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}