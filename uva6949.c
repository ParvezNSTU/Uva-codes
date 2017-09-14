#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    typedef struct
    {
        int x,y;
    }carpos;
    carpos pos[1005];
    typedef struct
    {
        int xj,yj,t;
    }question;
    question s[1005];
    int i,j,k,l,m,n;
    int lastpos[1005];
    int frange,lrange,tm;
    int fpos,lpos,cycle,dif,rem,p,count,q;
    while(scanf( "%d %d",&m,&n)==2)
    {
        for(i=0;i<m;i++)

        {
            scanf("%d",&pos[i].x);
            scanf("%d",&pos[i].y);
        }
        for(j=0;j<n;j++)
        {
            scanf("%d %d %d",&s[j].xj,&s[j].yj,&s[j].t);
        }
        for(l=0;l<n;l++)
        {
            frange=s[l].xj;
            lrange=s[l].yj;
            tm=s[l].t;
            p=0;
            count=0;
        for(k=0;k<m;k++)
        {
            fpos=pos[k].x;
            lpos=pos[k].y;
            dif=abs(fpos-lpos);
            if(dif==0)
                lastpos[p++]=fpos;
            else if(tm<dif)
             lastpos[p++]=fpos+tm;
            else if(tm==dif)
                lastpos[p++]=lpos;
            else{
                cycle=tm/dif;
                rem=tm%dif;
                if(cycle%2==0)
                    lastpos[p++]=fpos+rem;
                else
                    lastpos[p++]=lpos-rem;
            }

        }
        for(q=0;q<p;q++)
        {

            if(lastpos[q]>=frange&&lastpos[q]<=lrange)
                count++;
        }
        printf("%d\n",count);

    }

}
}
