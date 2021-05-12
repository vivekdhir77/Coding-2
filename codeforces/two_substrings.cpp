#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define VIVEK_DHIR ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long int li;
typedef long long int ll;

using namespace std;

void solve()
{
    string s;
    cin>>s;
    int i;
    int n= s.length();
    for(i=1; i<n;i++)
    {
        if(s[i-1]=='A' && s[i]=='B')
        break;
    }
    for(int j=i+2;j<n;j++)
    {
        if(s[j-1]=='B' && s[j]=='A')
        {
            cout<<"YES\n";
            return;
        }
    }
    for(i=1; i<n;i++)
    {
        if(s[i-1]=='B' && s[i]=='A')
        break;
    }
    for(int j=i+2;j<n;j++)
    {
        if(s[j-1]=='A' && s[j]=='B')
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main()
{
    VIVEK_DHIR
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    int t=1;
    //cin>>t;
    while(t--)
    solve();
}