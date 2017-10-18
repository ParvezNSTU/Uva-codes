#include<stdio.h>
int main()
{
    long n;
    while(scanf("%ld",&n)==1)
    {
        if(n<0)
          break;
        printf("%ld\n",((n*(n+1)/2)+1));
    }
}
