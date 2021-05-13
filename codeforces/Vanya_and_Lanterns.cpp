#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
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
    int n,l;
    cin>>n>>l;
    double a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    double c1=0,c2=0,c3=0;
    c1 = a[0];
    c2 = l - a[n-1];
    for(int i=0;i<n-1;i++)
    {
        c3 = max(c3,(a[i+1]-a[i])/2);
    }
    //c3 = c3/2;
    if(c1>c2 && c1>c3)
        printf("%.9lf",c1);
    else if(c2>c1 && c2>c3)
        printf("%.9lf",c2);
    else if(c3>c1 && c3>c2)
       printf("%.9lf",c3);
    else 
        printf("%.9lf",c1);
}