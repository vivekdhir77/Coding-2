#include <iostream>
using namespace std;
typedef long long int ll;
#define VIVEK_DHIR ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define in(t) ll t;cin >> t;

void type1(int *a, int *p, int n)
{
    int Z[100000] = {};
    for (int i = 0; i < n; i++)
    {
        Z[i] = a[p[i]];
    }
    for (int i = 1; i < n; i++)
        a[i-1] = Z[i];
}

void type2(int *a, int x, int y)
{
    int temp = a[x - 1];
    a[x - 1] = a[y - 1];
    a[y - 1] = temp;
}

void type3(int *a, int x)
{
    cout << a[x - 1] << endl;
}

void solve()
{
    in(N);
    int A[N], B[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    in(Q);
    while (Q--)
    {
        in(n);
        if (n == 1)
        {
            type1(A, B, N);
        }
        else if (n == 2)
        {
            in(x);
            in(y);
            type2(A, x, y);
        }
        else
        {
            in(x);
            type3(A, x);
        }
    }
}
int main()
{
    VIVEK_DHIR
    in(t);
    while (t--)
        solve();
}