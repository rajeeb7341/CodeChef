#include<iostream>
using namespace std;

int  main()
{
    int n,val=0,val1=0;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i=i+1)
    {
        cin>>a[i];


    if(a[i]%2==0)
    {
        val=val+1;
    }
    if(a[i]%2!=0)
    {
        val1=val1+1;
    }

    }
    if(val>val1)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    }

      return 0;
}
