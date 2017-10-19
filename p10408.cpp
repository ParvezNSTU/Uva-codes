
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,d,p,q,k,m,n;
    while(scanf("%d %d",&m,&n)==2)
    {
        int i=0;
        a=0;b=1;c=1;d=m;
        while(--n)
        {
            k=((m+b)/d);
            p=(k*c)-a;
            q=(k*d)-b;
            a=c;b=d;c=p;d=q;
        }
        printf("%d/%d\n",c,d);
    }
}
