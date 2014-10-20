#include <iostream>
#define MAX 1000

using namespace std;

int main()
{
    int t;
    char buffer[MAX],buffer2[MAX],ans[MAX];
    scanf("%d",&t);
    while(t--){
        scanf("%s %s",&buffer,&buffer2);
        int m = (strlen(buffer)>strlen(buffer2) ? strlen(buffer) : strlen(buffer2));
        char a[m],b[m];
        for(int i=0;i<m;i++){
            a[i]=(m-(signed)strlen(buffer)-i<=0 ? buffer[m-i-1] : '0');
            b[i]=(m-(signed)strlen(buffer2)-i<=0 ? buffer2[m-i-1] : '0');
        }
        long long ai=atoi(a),bi=atoi(b);
        sprintf(buffer,"%lld",ai+bi);
        bool f=true;
        for(int i=0;i<strlen(buffer);i++){
            if(buffer[strlen(buffer)-i-1]!='0' or (buffer[strlen(buffer)-i-1]=='0' and !f)){
                cout<<buffer[strlen(buffer)-i-1];
                f=false;
            }
        }
        cout<<'\n';
    }
    return 0;
}
