#include<bits/stdc++.h>
#define E 0.001
#define X(y,z) ((12-2*y-z)/5)
#define Y(x,z) ((15-x-2*z)/4)
#define Z(x,y) ((20-x*2y)/5)
using namespace std;
int main()
{
    float x1=0,y1=0,z1=0,x2,y2,z2;
    while(1)
    {
        x2 = X(y1,z1);
        y2 = Y(x1,z1);
        z2 = Y(x1,y1);

        if(fabs(x2-x1)<E && fabs(z2-z1)<E && fabs(y2-y1)<E)
        {
            cout<<"Value of x is : "<<x2<<"\n";
            cout<<"Value of y is : "<<y2<<"\n";
            cout<<"Value of z is : "<<z2<<"\n";
            break;
        }
        else
        {
            x1 = x2;
            y1 = y2;
            z1 = z2;
        }
    }
    return 0;
}
