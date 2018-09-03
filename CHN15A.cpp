#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
	int t,n,k;
	int check = 0;
	cin>> t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			a[i]=a[i]+k;
			if(a[i]%7==0)
				check ++;
			
		}
		
			cout<<check<<"\n";
			check = 0;
		
	}
	return 0;
} 
