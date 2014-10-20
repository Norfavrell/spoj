#include <iostream>

using namespace std;

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int mac[m*n];
    for(int i=0;i<m*n;i++)
        scanf("%d",&mac[i]);
    for(int j=0;j<n;j++)
        for(int i=j;i<m*n;i+=n)
            cout<<mac[i]<<(i+n<m*n ? " " : (j+1<n ? "\n" : ""));
    return 0;
}
