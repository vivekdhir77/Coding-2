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
    in(n);
    ll arr[n];
    for(int i=0; i<n;i++)
    cin>>arr[i];
    int c=1, max = 1;
    for(int i=0 ; i<n-1 ; i++)
    {
        if(arr[i]<arr[i+1])
            {
            ++c;
            if(c>max)
                max=c;
            }
        else
            c=1;
    }
    cout<<max<< endl;
}

int main()
{
    VIVEK_DHIR
    solve();
}