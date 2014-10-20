#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int data[n];
        for(int i=0;i<n;i++)
            scanf("%d",&data[i]);
        for(int i=1;i<n;i+=2)
            cout<<data[i]<<" ";
        for(int i=0;i<n;i+=2)
            cout<<data[i]<<(i+2<n ? " ": "\n");
    }
    return 0;
}
