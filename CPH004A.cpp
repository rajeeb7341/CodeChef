#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    float avg;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i=i+1)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i=i+1)
    {

        avg=(a[0]+a[n-1])/2;

    }
    cout<<avg<<endl;
    return 0;
}
