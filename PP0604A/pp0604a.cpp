#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t){
        int n;
        scanf("%d",&n);
        int data[n];
        for(int i=0;i<n;i++)
            scanf("%d",&data[i]);
        double sr=0;
        for(int i=0;i<n;i++)
            sr+=data[i];
        sr/=n;
        int lowest=n+1;
        double val=1000000000;
        for(int i=0;i<n;i++){
            double v=sr-data[i];
            v=fabs(v);
            if(v<val){
                lowest=i;
                val=v;
            }
        }
        cout<<data[lowest]<<endl;

        t--;
    }
    return 0;
}
