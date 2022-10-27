#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);
	}
	return result;
}

int main()
{   int n;
	cout<<"Enter The Length of the Array : ";
	cin>>n;
	int a[n];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	cout << findGCD(a, n) << endl;
	return 0;
}
