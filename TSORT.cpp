#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i=i+1)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i=i+1)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

