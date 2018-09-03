#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

   for(int i=0;i<n;i=i+1)
   {
       int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int sum=a+b+c+d+e;
       if(sum==0)
       {
           cout<<"Beginner"<<endl;
       }
       else if(sum==1)
       {
           cout<<"Junior Developer"<<endl;
       }
       else if(sum==2)
       {
           cout<<"Middle Developer"<<endl;
       }
       else if(sum==3)
       {
           cout<<"Senior Developer"<<endl;
       }
       else if(sum==4)
       {
           cout<<"Hacker"<<endl;
       }
       else if(sum==5)
       {
           cout<<"Jeff Dean"<<endl;
       }

   }
   return 0;
}
