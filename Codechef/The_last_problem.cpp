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
#define in(t) \
    ll t;     \
    cin >> t;
#define tc(t) while (t--)

int arr[1001][1001] = {};

void pre()
{
    int c = 1;
    int i=1;
    for (int j = 1; j < 1001; j++)
    {

        if (arr[i][j] != 0)
        {
            arr[i][j] = c;
            c++;
        }
    }
}

void compute()
{
    ll no=0,diff=1;
    for(ll i=0;i<1000;i++)
    {
        arr[i][0]=no+diff;
        no = no+diff;
        diff++;
    }
    
    for(ll i=0;i<1000;i++)
    {
        diff=i+1;
        for(ll j=1;j<1000;j++)
        {
            arr[i][j]=arr[i][j-1]+diff;
            diff++;
        }   
    }
}
int main()
{
    VIVEK_DHIR
    compute();
    in(t);
    while(t--)
    {
        int x1,y1,x2,y2;
    }
}