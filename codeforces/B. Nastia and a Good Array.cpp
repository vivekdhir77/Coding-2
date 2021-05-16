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
#define inp(t) cin >> t;
#define in(t) \
    int t;    \
    cin >> t;
#define lon(t) \
    ll t;      \
    cin >> t;
#define tc(t) while (t--)

void solve()
{
    in(n);
    ll arr[n];
    ll mod = 1e9 + 9;
    for (int i = 0; i < n; i++)
    {
        inp(arr[i]);
    }
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    int start = 0;
    if (!(min & 1))
    {
        start = 1;
        cout<<n/2<<endl;
    }
    else
        cout<<(n+1)/2<<endl;

    for(int i=start; i<n;i+=2)
        cout<<min+1<<" "<<i+1<<" "<<arr[min]<<" "<<mod<<endl;
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