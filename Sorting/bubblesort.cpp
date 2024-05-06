#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define nl "\n"
#define MOD 100
const ll mx = 1e6 + 123;
ll sum[mx], a[mx];
using namespace std;
int main()
{
    fast;
    ll n, i, j, c = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
    {
        bool f = true;
        for (j = 1; j <= n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                f = false;
            }
        }
        if (f)
            break;
    }
    for (i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << nl;
    return 0;
}
