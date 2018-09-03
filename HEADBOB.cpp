#include<iostream>
using namespace std;

int main()
{
    int t,n;
    char c[1000],key1,key2;
    cin>>t;
    key1='Y';
    key2='I';
    for(int i=0;i<t;i=i+1)
    {
        cin>>n;
        for(int j=0;j<n;j=j+1)
        {
            cin>>c[j];
        }
        int j;
        for( j=0;j<n;j=j+1)
        {
            if(key2==c[j])
            {
                cout<<"INDIAN"<<endl;
                break;
            }
            else if(key1==c[j])
            {
                cout<<"NOT INDIAN"<<endl;
                break;
            }
        }
        if(j==n)
        {
            cout<<"NOT SURE"<<endl;
        }
    }
    return 0;
}
