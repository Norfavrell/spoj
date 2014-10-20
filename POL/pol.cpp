#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[2*1001];
        scanf("%s",&a);
        for(int i=0;i<strlen(a)/2;i++)
            cout<<a[i];
        cout<<"\n";
    }
    return 0;
}
