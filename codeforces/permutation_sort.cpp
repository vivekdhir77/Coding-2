#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
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
    in(t);
    tc(t)
    {
        in(n);
        int arr[n+1];
        for(int i=1;i<n+1;i++)
        {
            cin>>arr[i];
        }
        int check=1;
        for(int i=1;i<n+1;i++)
        {
            if(arr[i]!=i)
            check=0;
        }
        if(check)
            cout<<"0\n";
        else
        if(arr[1]==1 || arr[n]==n)
            cout<<"1\n";
        else if(arr[1]==n and arr[n]==1)
            cout<<"3\n";
        else
            cout<<"2\n";
    }
}