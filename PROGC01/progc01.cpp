#include <iostream>

using namespace std;

int main()
{
    char t;
    int s=0;
    while(scanf("%c",&t)!=EOF)
        if(t=='\n')
            s++;
    cout<<s+1;
}
