#include<bits/stdc++.h>
#define fof(x) x*x*x - x - 2
using namespace std;

int main()
{
    float x1,x2,root,fx1,fx2,fxroot,ERR;
    int step = 1;
    cout << setprecision(2) << fixed;
    up:
    cout <<"1st Guess:";
    cin >>x1;
    cout <<"2nd Guess:";
    cin>>x2;
    cout <<"Error :";
    cin>>ERR;

    fx1 = fof(x1);
    fx2 = fof(x2);

    if(fx1*fx2 > 0.0)
    {
        cout << "Incorrect Initial Guesses"<<endl;
        goto up;

    }


    do
    {
         root = x1 - (fx1*(x2-x1)/(fx2-fx1));
         fxroot = fof(root);
         cout << "Iteration : "<<step<<":\t root = "<<setw(10)<<root<<" and f(root) = "<<setw(10)<<fof(root)<<endl;
         if(fx1*fxroot < 0)
         {
             x2 = root;
         }
         else
         {
             x1 = root;
         }

         step = step + 1;
    }while(fabs(fxroot)>ERR);

    cout << endl << "Root is : " <<root<<endl;
    return 0;
}

