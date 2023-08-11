///   ***   ---   ||| In the name of ALLAH |||   ---   ***   ///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=2e5+123;
ll a[mx],sum[mx];
int main()
{
    fast;
    ll n,q,i,s=0,l,r;
    cin>>n>>q;
    for(i=1;i<=n;i++)
        cin>>a[i];
    ///Partial Sum
    for(i=0;i<=n;i++)
        sum[i]=a[i]+sum[i-1];
    ///queries
    for(i=0;i<q;i++)
    {
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<nl;
    }
    return 0;
}
