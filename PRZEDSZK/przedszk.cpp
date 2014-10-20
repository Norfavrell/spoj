#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,w;
        scanf("%d %d",&a,&b);
        for(w=(a>b ? a : b);w%a+w%b!=0;w++);
        cout<<w<<"\n";
    }
    return 0;
}
