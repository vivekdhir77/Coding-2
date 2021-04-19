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
void solve()
{
    ll Am, Bm, Cm, Tm, A,B,C;
    cin>>Am>> Bm>> Cm>> Tm>> A>>B>> C;
    ll sum = A+B+C;
    if (sum>=Tm && A>=Am && B>=Bm && C>=Cm)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

int main()
{
    FASTIO
    // #ifndef ONLINE_JUDGE
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    // #endif
    int t; cin>>t;
    while(t--)
    solve();

}