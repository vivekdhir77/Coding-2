#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef long int li;
typedef long long int ll;
#define VIVEK_DHIR
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)
#define FA(i, start, end) for (int i = start; i < end; i++)
#define FD(i, start, end) for (int i = start; i >= end; i--)
#define in(t) int t;scanf("%d",&t);
#define pt(t) printf("%d",t);
#define tc(t) while(t--)
int main()
{
    int a=500,b=100,c;
    if(!(a>=400))
    b=300;
    c=200;
    printf("b= %d c=%d\n",b,c);
}