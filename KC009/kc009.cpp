#include <iostream>

using namespace std;

int main()
{
    char data[1000];
    while(scanf("%s",&data)!=EOF){
        for(int i=0;i<strlen(data);i++)
            cout<<data[strlen(data)-i-1];
        cout<<'\n';
    }
    return 0;
}
