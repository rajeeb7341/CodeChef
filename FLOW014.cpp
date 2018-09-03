#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float a,b,c;
    for(int i=0;i<n;i=i+1)
    {
       cin>>a>>b>>c;
        if(a>50.0 && b<0.7 && c>5600)
        {
            cout<<10<<endl;
        }
        else if(a>50.0 && b<0.7)
        {
            cout<<9<<endl;
        }
        else if(b<0.7 && c>5600)
        {
            cout<<8<<endl;
        }
        else if(a>50.0 && c>5600)
        {
            cout<<7<<endl;
        }
        else if(a>50.0||b<0.7||c>5600)
        {
            cout<<6<<endl;
        }
        else{
            cout<<5<<endl;
        }
    }
    return 0;
}
