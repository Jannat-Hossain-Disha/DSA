#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"
using namespace std;
const int mx=2e5+123;
ll a[mx],sum[mx];
int main()
{
    fast;
    ll n,q,s,i,l,r;
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
       sum[i]=sum[i-1]^a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>l>>r;
        cout<<int(sum[r]^sum[l-1])<<nl;
    }
    return 0;
}
