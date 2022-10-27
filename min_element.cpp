#include<iostream>
using namespace std;
int main()
{
     int a[30],n;
     cout<<"Enter the Length of the Array : ";
     cin>>n;
     cout<<"Enter the Elements of the Array :";
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int min=a[0];
     for(int i=1;i<n;i++)
     {
         if(a[i]<min)
         {
            min=a[i];
         }
     }
     cout<<"Min Element in the Array = "<<min;
     return 0;
}

