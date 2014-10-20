#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);
        for(int i=0;i<n;i++)
            if(i%x==0 and i%y!=0)
                cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
