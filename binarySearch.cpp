#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define nl "\n"
#define MOD 100
const ll mx = 1e6 + 123;
ll sum[mx], a[mx];
using namespace std;

int main()
{
    fast;
    ll n, i, f = 0, pos, t, mid;
    cin >> n >> t;
    for (i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = n - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == t)
        {
            f = 1;
            pos = mid;
        }
        if (a[mid] > t)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    if (f)
        cout << pos << nl;
    else
        cout << -1 << nl;
    return 0;
}
