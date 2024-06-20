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
ll sum[mx];
using namespace std;
int main()
{
    fast;
    ll n, i, j, mn;
    cin >> n;
    ll a[n + 5];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n - 1; i++)
    {
        mn = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[mn])
                mn = j;
        }
        swap(a[mn], a[i]);
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;

    return 0;
}
