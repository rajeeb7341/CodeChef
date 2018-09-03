#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i=i+1)
    {
        int no;
        int digit,val=0;
        cin>>no;
        while(no>0)
        {
            int last_digit=no%10;
            digit=last_digit;
            no=no/10;
            if(digit==4)
            {
                val=val+1;
            }
        }
        cout<<val<<endl;
    }
    return 0;
}
