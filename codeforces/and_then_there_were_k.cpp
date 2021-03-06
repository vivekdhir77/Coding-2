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
#define in(t) \
    ll t;     \
    cin >> t;
#define tc(t) while (t--)

void solve()
{
    in(n);
    ll ans =0;
    for (int i = 32; i >=0; i--)
    {
        if(((n>>i)&1)) // or we can put if((1<<i)&n)
        {
            ans = (1<<i)-1;
            break;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    VIVEK_DHIR
    in(t);
    tc(t)
        solve();
}