#include <iostream>

using namespace std;

int mask[11] = {1,3,7,9,1,3,7,9,1,3,1};

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned int tmp,sum=0;
        for(int i=0;i<11;i++){
            scanf("%1u",&tmp);
            sum+=tmp*mask[i];
        }
        cout<<(sum%10==0 ? "D" : "N")<<endl;
    }
    return 0;
}
