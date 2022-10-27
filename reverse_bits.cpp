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
	cout<<"Reverse of this Binary Bits = ";
	for(int k=0;k<i;k++)
	{
		cout<<a[k];
	}
	for(int k=0;k<j;k++)
	{
		rem=b[k]%10;
		dec=dec+rem*base;
		b[k]=b[k]/10;
		base=base*2;
	}
	cout<<endl;
	cout<<"Decimal value of this Reversed Number = "<<dec;
	return 0;   
}

