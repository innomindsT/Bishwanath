#include<iostream>
using namespace std;
int main()
{
	int a1[30],a2[30],res[60],i,n,m,*p,*q,*r;
	cout<<"Enter the Length of the Array 1 : ";
	cin>>n;
	cout<<"Enter the Elements of the of the array 1 : ";
	for(i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	cout<<"Enter the Length of the Array 2 : ";
	cin>>m;
	cout<<"Enter the Elements of the of the array 2 : ";
	for(i=0;i<m;i++)
	{
		cin>>a2[i];
	}
	
	p=a1;
	q=a2;
	r=res;
	for(i=0;i<n;i++)
	{
		*r=*p;
		r++;
		p++;
	}
	for(i=0;i<m;i++)
	{
		*r=*q;
		r++;
		q++;
	}
	*r='\0';
	for(i=0;i<n+m;i++)
	{
		cout<<res[i]<<"  ";
	}
	return 0;
}

