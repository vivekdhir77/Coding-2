#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
typedef long int li;
typedef long long int ll;
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)
#define FA(i, start, end) for (int i = start; i < end; i++)
#define FD(i, start, end) for (int i = start; i >= end; i--)
#define VIVEK_DHIR ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define in(t) ll t;cin>>t;
#define tc(t) while(t--)

void solve()
{
    in(a);in(b);
    if(b==1)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        cout<< a <<" "<<a*(ll)b<<" "<<(ll)a*(b+1)<<endl;
    }
}

int main()
{
    VIVEK_DHIR
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    in(t);
    tc(t)
    solve();
}