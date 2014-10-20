#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int f,tmp;
        scanf("%d",&f);
        for(int i=0;i<n-1;i++){
            scanf("%d",&tmp);
            printf("%d ",tmp);
        }
        cout<<f<<endl;
    }
    return 0;
}
