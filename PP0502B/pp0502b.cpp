#include <iostream>
#define MAX 100

using namespace std;

int main(){
    int t;//cases
    cin>>t;
    int l[t];
    int ans[t][MAX];
    for(int i=0;i<t;i++){
        scanf("%d",&l[i]);
        int data[l[i]];
        for(int j=0;j<l[i];j++)
            scanf("%d",&data[j]);
        for(int j=0;j<l[i];j++)
            ans[i][j]=data[l[i]-j-1];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<l[i];j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}