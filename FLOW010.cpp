#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i=i+1)
    {
        char c;
        cin>>c;
        if((c=='b')||(c=='B'))
        {
            cout<<"BattleShip"<<endl;
        }
        else if(c=='c'||c=='C')
        {
            cout<<"Cruiser"<<endl;
        }
        else if(c=='d'||c=='D')
        {
            cout<<"Destroyer"<<endl;
        }
        else if(c=='f'||c=='F')
        {
            cout<<"Frigate"<<endl;
        }

    }
    return 0;
}
