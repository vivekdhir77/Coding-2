#include<iostream>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long long int ll;
#define mod (ll)(1e9+7)
using namespace std;
ll binexp_loop(ll base, ll pow)
    {
        ll res=1;
        if (pow==0)
        return 1;
        while(pow)
        {
            if (pow&1) res =(res * base)%mod;
            base=(base*base)%mod;
            pow= pow>>1;
        }
        return res;
    }
void solve()
{
    int n;
    cin>>n;
    int ans = binexp_loop(2, n-1);
    cout<<ans<<"\n";
}
int main()
{
    FASTIO
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}