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
void merge(ll l, ll mid, ll r)
{
    ll p = l;
    ll k = 0;
    ll q = mid + 1;
    ll temp[r - l + 1];
    while (p <= mid && q <= r)
    {
        if (a[p] <= a[q])
        {
            temp[k] = a[p];
            k++;
            p++;
        }
        else
        {
            temp[k] = a[q];
            k++;
            q++;
        }
    }
    while (p <= mid)
    {
        temp[k] = a[p];
        p++;
        k++;
    }
    while (q <= r)
    {
        temp[k] = a[q];
        k++;
        q++;
    }
    k = 0;
    for (int i = l; i <= r; i++)
    {
        a[i] = temp[k];
        k++;
    }
}
void mergeSort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, mid, r);
}
int main()
{
    //fast;
    int n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    mergeSort(0, n-1);
    //mergeSort(0, n-1);
    //mergeSort(0, n-1);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << nl;
    return 0;
}
