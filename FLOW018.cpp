#include<iostream>
using namespace std;
int main(){
int l;
cin>>l;
for(int k=0;k<l;k=k+1)
{


int n,factorial=1;
cin>>n;
for(int i=1;i<=n;i=i+1)
{
    factorial=factorial*i;
}
cout<<factorial<<endl;
}
return 0;
}
