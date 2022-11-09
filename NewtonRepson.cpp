#include<bits/stdc++.h>
#define f(x) (x*x)-3*x-2
#define f1(x) 2*x-3
using namespace std;
int main()
{
    float x0,x1,fx0,fx1,err;
    int step=1;
    cout << setprecision(3)<<fixed;

    cout << "Enter x0 :";
    cin>> x0;
    cout << endl<<"Enter Error :";
    cin>>err;

    do
    {
        fx1 = f(x0);
        fx0 = f1(x0);
        x1 = x0 - (fx0/fx1);
        fx3 = f
        cout <<"Step " <<step <<" Root "<< root <<endl;


        step++;
    }
    while((fabs(fx1))>err);

    cout << "Root = " << x1 <<endl;


    return 0;
}

