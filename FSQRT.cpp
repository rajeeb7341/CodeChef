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
        int val=0;
        while(val*val<=no)
        {
            val=val+1;
        }
        val=val-1;
        cout<<val<<endl;
    }
    return 0;
}
