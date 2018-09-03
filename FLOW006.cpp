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
        int sum=0;
       while(no>0)
       {
           int last_digit=no%10;
           sum=sum+last_digit;
           no=no/10;

       }
       cout<<sum<<endl;
    }
    return 0;
}
