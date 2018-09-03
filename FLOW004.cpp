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
        int digit,r;
        int rem=no%10;
        r=rem;

        while(no>0)
        {
            int last_digit=no%10;
            digit=last_digit;
            no=no/10;


        }
        cout<<r+digit<<endl;
    }
    return 0;
}
