#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int no;
    for(int i=0;i<n;i=i+1)
    {
        cin>>no;
        if(no<10)
        {
            cout<<"What an obedient servant you are!"<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;

}
