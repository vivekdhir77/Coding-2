#include <stdio.h>
int isSingleDigit(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    if(c==1)
        return 1;
    else 
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(isSingleDigit(n)!=1)
    {
        int sum =0;
        while(n!=0)
        {
            sum = sum + (n%10)*(n%10);
            n=n/10;
        }
        n = sum;
    }
    if(n==1)
        printf("happy no");
    else
        printf("not happy no");
}