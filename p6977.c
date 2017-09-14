#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,n,m,i,j,k,l;
    char base[5];
    double value,sum,val;
    while (scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
        {
        scanf("%d %s",&n,&base);
        sum=0.00;
        if (strcmp(base,"bit")==0)
        {
            for(j=0;j<n;j++)
            {
             scanf( "%lf",&val);
             if(val==0)
                sum+=0;
             else{
             val=val/100.00;
             sum+=val*(log(val)/log(2));

            }
            }
        }
        else if(strcmp(base,"dit")==0)
            {

            for(j=0;j<n;j++)
            {
             scanf( "%lf",&val);
              if(val==0)
                sum+=0;
                else{
             val=val/100.00;
             sum+=val*log10(val);

            }
            }
            }
        else
            {
            for(j=0;j<n;j++)
            {
             scanf( "%lf",&val);
             if(val==0)
                sum+=0;
                else{

             val=val/100.00;
             sum+=val*log(val);
                }
            }
        }
        value=-sum;

        printf("%0.12lf\n",value);

                }
    }
    return 0;
}
