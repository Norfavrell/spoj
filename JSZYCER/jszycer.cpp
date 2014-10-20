#include <iostream>

using namespace std;

int main()
{
    char c;
    while(scanf("%c",&c)!=EOF){
        if(c==' ' or c=='\n'){ cout<<c; continue; }
        if((int)c<88)
            cout<<(char)((int)c+3);
        else
            cout<<(char)((int)c-23);

    }
    return 0;
}
