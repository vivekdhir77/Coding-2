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

int main()
{
    VIVEK_DHIR
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    in(n);
    in(m);
    int min = max(0, n - 2 * m);
    
    
}
/*
n,m=map(int,raw_input().split())
print max(0,n-m*2),
if m:
    x=0
    while m>x:
        m-=x
        x+=1
    print n-x-1
else:
    print n
*/