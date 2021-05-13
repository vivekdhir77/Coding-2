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

int main()
{
    VIVEK_DHIR
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int cost= 0;
    if (b<m*a)
    {
        cost = (n/m)*b +min( ((n%m)*a), b );
    }
    else
    {
        cost = n*a;
    }
    cout<<cost;
}