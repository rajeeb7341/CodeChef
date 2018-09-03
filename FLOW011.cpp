#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double salary,hra,da,gs;
    for(int i=0;i<n;i=i+1)
    {

        cin>>salary;
        if(salary<1500)
        {
            hra=0.1*salary;
            da=0.9*salary;
            gs=salary+hra+da;



        }
        else if(salary>=1500)
        {
            hra=500;
            da=0.98*salary;
            gs=salary+hra+da;

        }
         cout << fixed << setprecision(2) << gs << endl;
    }
    return 0;
}
