#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,sum;
    long long int a[100000];

    cin>>t;
    for(int i=0;i<t;i=i+1)
    {
        cin>>n;
        for(int j=0;j<n;j=j+1)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(int j=0;j<1;j=j+1)
        {
            sum=a[j]+a[j+1];
            cout<<sum<<endl;
        }
        cout<<endl;



    }
    return 0;
}
