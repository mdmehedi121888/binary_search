// peak element strictly greater than its neighbour
// one array have once more peak element
// first element or last element also a peak value just check the neighbour value is less  ...

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int peakElement(int ar[], int n)
{
    int l = 0, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid == 0)
        {
            if (ar[mid] > ar[mid + 1])
                return ar[mid];
            else
                return ar[mid + 1];
        }
        else if (mid == n)
        {
            if (ar[mid] > ar[mid - 1])
                return ar[mid];
            else
                return ar[mid - 1];
        }
        else if (mid > 0 && mid < n)
        {
            if (ar[mid] > ar[mid - 1] && ar[mid] > ar[mid + 1])
                return ar[mid];
            else if (ar[mid - 1] > ar[mid])
                r = mid - 1;
            else
                l = mid + 1;
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
    if (n == 1)
        cout << ar[0] << endl;
    else
        cout << peakElement(ar, n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}