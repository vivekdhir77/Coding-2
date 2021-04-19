#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int freq[1001]={};
    for (int i=0; i<n;i++)
    {
        cin>> arr[i];
        freq[arr[i]]++;
    }
    short flag=0;
    short count=0;
    int max1_ind=0, max2_ind=0; 
    for (int i=1000; i>0; i--)
    {
        if (freq[i]>1)
        {
            count = count + (freq[i]/2);
            if (max1_ind==0)
                {
                    max1_ind = i;
                    if (count > 1)
                        {
                            max2_ind =i;
                        }
                }
            else
            {
                max2_ind = i;
            }
        }
        if (count>=2)
        {
            flag=1;
            break;
        }
    }


    if (flag==0)
        {
            cout<<"-1\n";
            return;
        }
    cout<< max1_ind * max2_ind<<"\n";
}

int main()
{
    int t; cin>>t;
    while(t--)
    solve();
}