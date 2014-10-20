#include <iostream>

using namespace std;

int main()
{
    int t;
    char data[200];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&data);
        char last=data[0];
        int licz=1;
        for(int i=1;i<strlen(data);i++){
            if(data[i]!=last){
                if(licz<3){
                    for(int j=0;j<licz;j++)
                        cout<<last;
                    last=data[i];
                    licz=1;
                } else{
                    cout<<last<<licz;
                    last=data[i];
                    licz=1;
                }
            } else
                licz++;
        }
        if(licz<3)
            for(int i=0;i<licz;i++)
                cout<<last;
        else
            cout<<last<<licz;
        cout<<"\n";
    }
    return 0;
}
