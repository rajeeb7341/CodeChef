#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i=i+1)
    {
        int no;
        cin>>no;
        int k=no*2;
        if(no%10==0)
        {
            cout<<"0"<<endl;
        }
        else if(no%10!=0 && k%10==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
