#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans[t];
    int st = t;
    while(t){
        int c;
        cin >> c;
        int answ=0;
        for(int i=0;i<c;i++){
            int tmp;
            cin >> tmp;
            answ+=tmp;
        }
        ans[st-t]=answ;
        t--;
    }
    for(int i=0;i<sizeof(ans)/4;i++)
        cout << ans[i] << endl;
    return 0;
}
