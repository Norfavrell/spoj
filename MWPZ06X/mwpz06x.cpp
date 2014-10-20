#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int ans[t];
    while(t){
        int tmp;
        scanf("%d",&tmp);
        ans[sizeof(ans)/4-t]=tmp*tmp;
        t--;
    }
    for(int i=0;i<sizeof(ans)/4;i++)
        cout<<ans[i]<<endl;
    return 0;
}
