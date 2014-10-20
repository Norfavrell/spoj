#include <iostream>

using namespace std;
int pmf(int a, int b, int m)
{
   int i;
   int result = 1;
   long int x = a%m;
   for (i=1; i<=b; i<<=1)
   {
      x %= m;
      if ((b&i) != 0)
      {
         result *= x;
         result %= m;
      }
      x *= x;
   }
   return result%m;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x,n,p;
        scanf("%d %d %d",&x,&n,&p);
        cout<<pmf(x,n,p)<<"\n";
    }
    return 0;
}
