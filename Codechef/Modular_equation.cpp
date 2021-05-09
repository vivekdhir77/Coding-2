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

ll count(ll n) {
  ll c = 0;  
  for (int i = 1; i * i <= n; ++i){
    if (n % i == 0){
      ++c;
      if (n / i != i) ++c;  
    }
  }
  return 0;
}

void solve()
{
    int n,m;
    cin>> n >>m;

}
int main()
{
    FASTIO
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}