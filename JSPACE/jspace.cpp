#include <iostream>
#include<cctype>

using namespace std;

int main()
{
    char c;
    bool t=false;
    while(scanf("%c",&c)!=EOF){
        if(c==' '){ t=true; continue; }
        if(c=='\n'){ cout<<c; t=false;continue; }
        if(t){
            cout<<(char)toupper(c);
            t=false;
       }else
            cout<<c;
    }
    return 0;
}
