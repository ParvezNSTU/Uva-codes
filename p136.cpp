#include<iostream>
using namespace std;
bool check(int i)
{
    while(i%2==0)
        i/=1;
    while(i%3==0)
        i/=3;
    while(i%5==0)
        i/=5;
    if(i==1)
        return true;
    else
        return false;
}
int main()
{
    int c=1;
    int a=2;
    while(1)
    {
       bool i=check(a);
        if(i==true)
            c++;
        a++;
        if(c==1500)
            break;
    }
    cout<<a;
}
