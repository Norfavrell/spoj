#include <iostream>
#include <math.h>
#define PI 3.141592654

using namespace std;

int main()
{
    double d,r,x;
    scanf("%lf %lf",&r,&d);
    printf("%.2lf",(r*r-(d/2*d/2))*PI);
    return 0;
}