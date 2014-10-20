#include <iostream>

using namespace std;

int main()
{
    char tmp;
    bool wa=false;
    while(scanf("%c",&tmp)!=EOF){
        if(tmp=='<') wa=true;
        else if(tmp=='>') wa=false;
        if(wa)
            cout<<(char)toupper(tmp);
        else
            cout<<tmp;
    }
    return 0;
}
