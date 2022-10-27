#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

   findlcm(int arr[], int n)
{
	int ans = arr[0];
	for (int i = 1; i < n; i++)
		ans = (arr[i] * ans)/
				(gcd(arr[i], ans));

	return ans;
}

int main()
{
	int n;
	cout<<"Enter The Length of the Array : ";
	cin>>n;
	int a[n];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	cout<<findlcm(a, n);
	return 0;
}

