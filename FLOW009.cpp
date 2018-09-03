#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double q,p;
    double cost;
    for(int i=0;i<n;i=i+1)
    {
        cin>>q>>p;
    if(q>1000){
            cost=q*p*0.9;

    }
    else
    {
        cost=q*p;

    }
    cout<<fixed<<setprecision(6)<<cost<<endl;

    }
    return 0;
}
