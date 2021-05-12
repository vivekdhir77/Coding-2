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
    float angle;
    cin>>angle;
    float n=  360/(180-angle);
    int num = (int)n;
    if (num==n)
    printf("YES\n");
    else
    printf("NO\n");
}

int main()
{
    FASTIO
    // #ifndef ONLINE_JUDGE
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    // #endif
    /*
    angle = (n-2)180/n

    angle * n = (n-2)*180

    angle * n = n*180 -360

    n * 180 - angle * n =360

    n(180 - angle) = 360

    n = 360/(180-angle) 
    */
   int t;
   cin>>t;
   while(t--)
   solve();
}