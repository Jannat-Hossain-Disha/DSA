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

struct info
{
    double gpa;
    int age;
    string name;
};

bool cmp(const info &a, const info &b)
{
    if (a.gpa > b.gpa)
        return true;
    else if (a.gpa == b.gpa && a.age < b.age)
        return true;
    else if (a.gpa == b.gpa && a.age == b.age && a.name < b.name)
        return true;
    return false;
}

int main()
{
    fast;
    ll n, i;
    cin >> n;
    vector<info> v;
    for (i = 0; i < n; i++)
    {
        double gpa1;
        int age1;
        string name1;
        cin>>gpa1>>age1>>name1;
        info a;
        a.gpa = gpa1;
        a.age = age1;
        a.name = name1;
        v.pb(a);
    }
    cout<<"Before Sorting\n";
    for (auto u : v)
        cout << u.gpa << " " << u.age << " " << u.name << nl;
    cout<<nl;
    sort(v.begin(), v.end(), cmp);
    cout<<"After Sorting\n";
    for (auto u : v)
        cout << u.gpa << " " << u.age << " " << u.name << nl;
    return 0;
}
