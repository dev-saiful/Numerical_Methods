#include<bits/stdc++.h>
#define ERR 0.001
#define f(x) x*x-4*x-10
using namespace std;
int main()
{
    float x1,x2,x3,f1,f3,f2,root,counter=0;
    cout << "Welcome To Saiful\'s kingdom"<<endl;
    cout <<"Enter the value of x1 = ";
    cin>>x1;
    cout <<"Enter the value of x2 = ";
    cin>>x2;
    while(1)
    {
        f1 = f(x1);
        f2= f(x2);
        x3 = x2-(f2*(x2-x1))/(f2-f1);
        f3 = f(x3);
        cout << "Step "<<counter<<" x1= "<<x1<<endl;
        if(fabs(f3)<ERR)
        {
            cout << "Step "<<counter <<" Root is "<< x1<<endl;
            break;
        }
        else
        {
            x1 = x2;
            x2 = x3;
            counter++;
        }
    }
    return 0;
}

