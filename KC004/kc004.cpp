#include <iostream>

using namespace std;

int main()
{
    int s,su=0;
    while(scanf("%d",&s)!=EOF){
        su=0;
        int l,tmp;
        scanf("%d",&l);
        for(int i=0;i<l;i++){
            scanf("%d",&tmp);
            if(tmp==s) su++;
        }
        cout<<su<<"\n";
    }
    return 0;
}
