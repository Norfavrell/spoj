#include <iostream>

using namespace std;

int main()
{
    int n,k,tmp;
    scanf("%d %d",&n,&k);
    int data[k];
    for(int i=0;i<k;i++)
        scanf("%d",&data[i]);
    for(int i=0;i<n-k;i++){
        scanf("%d",&tmp);
        printf("%d ",tmp);
    }
    for(int i=0;i<k;i++)
        printf("%d ",data[i]);
    cout<<endl;
    return 0;
}
