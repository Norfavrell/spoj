#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct Pt{
    int x;
    int y;
    char name[11];
};

bool cmp(Pt a, Pt b){
    double pa,pb;
    pa=sqrt(a.x*a.x+a.y*a.y);
    pb=sqrt(b.x*b.x+b.y*b.y);
    return pa<pb;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<Pt> vec;
        while(n--){
            Pt pt;
            scanf("%s %d %d",&pt.name,&pt.x,&pt.y);
            vec.push_back(pt);
        }
        sort(vec.begin(),vec.end(),cmp);
        vector<Pt>::iterator iter = vec.begin();
        for(unsigned int i=0;i<vec.size();i++){
            cout<<(*iter).name<<" "<<(*iter).x<<" "<<(*iter).y<<"\n";
            *iter++;
        }
        cout<<"\n";
    }
    return 0;
}
