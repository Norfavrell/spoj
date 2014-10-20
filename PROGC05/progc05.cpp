#include <iostream>

using namespace std;

int main()
{
    char c;
    while(cin>>c){
        char a[101];
        scanf("%s",&a);
        for(int i=0;i<strlen(a);i++)
            if(a[i]!=c)
                cout<<a[i];
        cout<<"\n";
    }
    return 0;
}
