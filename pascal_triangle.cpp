#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
    return 1;
    }
    else
    {
    return n*fact(n-1);
    }
}
int main()
{
      int i,j,s,n;
      cout<<"Enter the Number of rows : " ;
      cin>>n;
      
      for(i=0;i<n;i++)
      {
         for(s=0;s<n-i;s++)
         {
             cout<<" ";
         }
         for(j=0;j<=i;j++)
         {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
         }
         cout<<endl;
       }
       return 0;
}
         
