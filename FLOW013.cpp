#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i=i+1)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(sum==180)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
