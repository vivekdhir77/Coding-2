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

int main()
{
    FASTIO
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    int n;
    cin>>n;
    int arr[n];
    int odd=0, ind_odd=0,ind_evn=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]&1)
        {
            odd++;
            ind_odd=i;
        }
        else
        ind_evn=i;
    }
    if (odd!=1)
    cout<<ind_evn;
    else
    cout<<ind_odd;
}