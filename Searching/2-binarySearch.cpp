#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the number of array size  : ";
    int n;
    cin >> n;
    vector<int> v;
    cout << "Enter the values of array : ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (auto u : v)
        cout << u << " ";
    cout << endl;
    cout << "Enter the key : ";
    int x;
    cin >> x;
    int l = 0, r = n - 1, f = 0, pos = 0;
    sort(v.begin(), v.end());
    while (l <= r)
    {
        cout << l << " " << r << endl;
        int mid = ((l + r) / 2);
        cout << mid << endl;
        if (v[mid] == x)
        {
            f = 1;
            pos = mid;
            break;
        }
        if (v[mid] < x)
        {
            l = mid + 1;
        }
        if (v[mid] > x)
        {
            r = mid - 1;
        }
    }
    if (f)
        cout << pos << endl;
    else
        cout << -1 << endl;
}