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

struct info{
    double gpa;
    int age;
    string name;
};

bool cmp(const info &a,const info &b)
{
    if(a.gpa>b.gpa)
    return true;
    else if(a.gpa==b.gpa && a.age<b.age)
    return true;
    else if(a.gpa==b.gpa && a.age==b.age && a.name<b.name)
    return true;
    return false;
}
void printstruct(info myinfo)
{
    cout<<myinfo.gpa<<" "<<myinfo.age<<" "<<myinfo.name<<nl;
}
int main()
{
    fast;
    info a,b;
    a.gpa=3.24;
    a.age=24;
    a.name="Adiba";

    b.gpa=3.69;
    b.age=24;
    b.name="Disha";
    printstruct(a);
    printstruct(b);
    cout<<cmp(a,b)<<nl;
    return 0;
}
