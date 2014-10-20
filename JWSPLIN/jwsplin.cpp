#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x1,x2,x3,y1,y2,y3;
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        if(x1*y2+x2*y3+x3*y1-x3*y2-x2*y1-x1*y3==0)
            cout<<"TAK\n";
        else
            cout<<"NIE\n";
    }
    return 0;
}
