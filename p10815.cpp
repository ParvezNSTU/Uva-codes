#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<set>
#include<sstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char text[201];
    string s;
    set<string>S;
    while(gets(text))
    {
        int p=strlen(text);
        for(int i=0;i<p;i++)
        {
            if(isalpha(text[i]))
                {
                    text[i]=tolower(text[i]);
                }
            else
                text[i]=' ';
        }
        istringstream iS(text);
        while(iS>>s)
        {
            S.insert(s);
        }


    }
    for(string w:S)
        {
            printf("%s\n",w.c_str());
        }

return 0;
}

