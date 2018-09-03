#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i=i+1)
    {


        double x1,x2,x3,v1,v2;
        cin>>x1>>x2>>x3>>v1>>v2;

        double dist1=(x3-x1);
        double dist2=(x2-x3);


    double t1=dist1/v1;
    double t2=dist2/v2;

    if(t1<t2)
    {
        cout<<"Chef"<<endl;
    }
    else if(t1>t2)
    {
        cout<<"Kefa"<<endl;
    }
    else if(t1==t2)
    {
        cout<<"Draw"<<endl;
    }
    }
    return 0;
}
