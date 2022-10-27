#include<iostream>
using namespace std;
int main()
{
	int n,a[30],b[30],i=0,j=0,rem,base=1,dec=0;
	cout<<"Enter a Number : ";
	cin>>n;
	
	int temp=n;
	while(temp!=0)
	{
		a[i]=temp%2;
		i++;
		temp=temp/2;
	}
	for(int k=i-1;k>=0;k--)
	{
		b[j]=a[k];
		j++;
	}
	cout<<"Binary Value of this Given Number "<<n<<" = ";
	for(int k=0;k<j;k++)
	{
		cout<<b[k];
	}
	cout<<endl;
	for(int k=0;k<j;k++)
	{
		if(b[k]==0)
		{
			b[k]=1;
		}
		else if(b[k]==1)
		{
			b[k]=0;
		}
	}
	cout<<"Binary Number after flipping its bits = ";
	for(int k=0;k<j;k++)
	{
		cout<<b[k];
	}
	cout<<endl;
	for(int k=0;k<j;k++)
	{
		rem=b[k]%10;
		dec=dec+rem*base;
		b[k]=b[k]/10;
		base=base*2;
	}
	cout<<"Decimal value of this Reversed Number = "<<dec;
	return 0;   
}

