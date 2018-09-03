#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int l;
    cin>>l;
    for(int i=0;i<l;i=i+1)
    {
        double n,v1,v2;
        cin>>n>>v1>>v2;

        double d;
        d=n*pow(2,0.5);



        double t1,t2;
        t1=d/v1;
        t2=n/v2;

        if(t1<2*t2)
        {
            cout<<"Stairs"<<endl;
        }
        else if(t1>2*t2)
        {
            cout<<"Elevator"<<endl;
        }

    }
    return 0;
}
