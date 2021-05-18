#include <iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define in(t) ll t;cin>>t;
#define tc(t) while(t--)

void solve()
{
    in(k);
    int divisor = __gcd(k, 100-k);
    int x = k/divisor;
    int y = (100-k)/divisor;
    cout<<x+y<<endl;
}

int main()
{
    in(t);
    while(t--)
    {
        solve();
    }
}