#include <iostream>
using namespace std;

int main()
{
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {


     int n, num, digit, rev = 0;


     cin >> num;

     n = num;

     while(num>0)
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     }



     if (n == rev)
         cout << "wins"<<endl;
     else
         cout << "losses"<<endl;
    }
    return 0;
}
