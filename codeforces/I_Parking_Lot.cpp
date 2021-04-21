#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long int li;
typedef long long int ll;

using namespace std;

ll binexp_loop(ll base, ll pow)
{
    ll res=1;
    while(pow)
    {
        if (pow&1) res *=base;
        base*=base;
        pow= pow>>1;
    }
    return res;
}

int main()
{
    FASTIO
    //4*(n-1)pow(3,n-2)
    ll n; cin>>n;
    ll res = ((2*n-2)-n);
    ll ans = 4 * binexp_loop(3, res) * (res+1);
    cout<<ans;
}