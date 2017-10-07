#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
  int array[10001],arr[10001];
  int n,q,x,s=1,y,k;
  bool f;
    while(scanf("%d %d",&n,&q))
    {
        if(n==0&&q==0)
            break;
       for(int i=0;i<n;i++)
       {
           scanf("%d",&array[i]);
       }
       sort(array,array+n);
       for(int j=0;j<q;j++)
       {
           scanf("%d",&arr[j]);
       }
       cout<<"CASE# "<<s<<": "<< "\n";
       for(int l=0;l<q;l++)
       {

           f=true;
          for( k=0;k<n;k++)
          {
          if(array[k]==arr[l])
          {
             cout<<arr[l]<< " found at "<<k+1<<"\n";
             f=false;
             break;

          }

          }
          if(f)
             cout<<arr[l]<< " not found\n";
       }

       s++;
    }
    return 0;
}
