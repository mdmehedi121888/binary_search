#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool binarySearch(int ar[], int r, int x)
{
    int l = 0;
    if (l == r)
    {
        if (x == ar[l])
            return true;
        else
            return false;
    }
    else
    {
        if (ar[0] < ar[r])
        {
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (ar[mid] == x)
                    return true;
                else if (ar[mid] > x)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            return false;
        }
        else
        {
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (ar[mid] == x)
                    return true;
                else if (ar[mid] > x)
                    l = mid + 1;

                else
                    r = mid - 1;
            }
            return false;
        }
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
    cout << binarySearch(ar, n - 1, x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}