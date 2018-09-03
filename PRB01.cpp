#include<iostream>
using namespace std;

int main()
{
    int l;
    cin>>l;
    for(int k=0;k<l;k=k+1)
    {

    int n;
    cin>>n;
    int i;
    i=2;
    while(i<=n-1)
    {
        if(n%i==0)
        {
            cout<<"no"<<endl;
            break;
        }
        i=i+1;



    }

    if(n==i)
    {
        cout<<"yes"<<endl;
    }

}
return 0;
}
