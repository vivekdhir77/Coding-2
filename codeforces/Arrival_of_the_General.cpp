#include <iostream>
#include <cmath>
#include <vector>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)
#define FA(i, start, end) for (int i = start; i < end; i++)
#define FD(i, start, end) for (int i = start; i >= end; i--)
#define VIVEK_DHIR ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long int li;
typedef long long int ll;

using namespace std;
#define in(t) ll t;cin>>t;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0, min = 0;
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (temp >= arr[i])
        {
            temp = arr[i];
            min = i;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (temp <= arr[i])
        {
            temp = arr[i];
            max = i;
        }
    }
    ++min; ++max;
    cout<<"min = "<<min<<" max= "<<max<<endl;
    int ans = (n-min) + (max-1);
    if(min<max)
    --ans;
    cout << ans<<endl;
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
    while(t--)
    solve();
}