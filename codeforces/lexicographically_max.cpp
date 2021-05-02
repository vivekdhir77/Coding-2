#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)
#define FA(i, start, end) for (int i = start; i < end; i++)
#define FD(i, start, end) for (int i = start; i >= end; i--)
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long int li;
typedef long long int ll;

using namespace std;

int main()
{
    FASTIO
    // #ifndef ONLINE_JUDGE
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    // #endif
    string s;
    cin >> s;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string ans = "";
    int ind = 0;
    for (int j = 25; j >= 0; j--)
    {
        for (int i = ind; i < s.length(); i++)
        {
            if(alpha[j]==s[i])
            {
                ans.push_back(alpha[j]);
                ind = i;
            }
        }
    }
    cout << ans;
}