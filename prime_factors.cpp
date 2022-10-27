#include<iostream>
using namespace std;
bool isPrimeNumber(int n)
{
	int count=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
	        {
			count++;
		}
	}
	if(count==0)
		return 1;
	else
		return 0;
}
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    
    cout<<"Prime Factors of "<<n<<" is = ";
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
          if(isPrimeNumber(i))
	  {
		  cout<<i<<" ";
          }
        }
    }
    return 0;
}

