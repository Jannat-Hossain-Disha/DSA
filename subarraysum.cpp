#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"
const ll mx=1e6+123;
ll sum[mx],a[mx];
using namespace std;
int main()
{
    ll i,n,x,ans=0,sub;
    cin>>n>>x;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        sum[i]=a[i]+sum[i-1];
    map<ll,ll>cnt;
    for(i=0;i<=n;i++)
        cnt[sum[i]]++;
    for(i=n;i>=1;i--)
    {
        cnt[sum[i]]--;
        sub=sum[i]-x;
        ans+=cnt[sub];
    }
    cout<<ans<<nl;
}
