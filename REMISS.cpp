#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i=i+1)
    {
        int a,b;
        cin>>a>>b;
        cout<<max(a,b)<<" "<<a+b<<endl;
    }
    return 0;
}
