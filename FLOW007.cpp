#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i=i+1)
    {


    int no,rem,rev_no=0;
    cin>>no;
    while(no>0)
    {
        rem=no%10;
        rev_no=rev_no*10+rem;
        no=no/10;
    }
    cout<<rev_no<<endl;
    }
  return 0;
}
