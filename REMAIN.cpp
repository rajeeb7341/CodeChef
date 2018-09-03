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
        int rem=a%b;
        if(rem%2==0)
        {
            cout<<"EVEN"<<endl;
        }
        else{
            cout<<"ODD"<<endl;
        }
    }
    return 0;
}
