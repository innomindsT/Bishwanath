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
     int max=a[0];
     for(int i=1;i<n;i++)
     {
         if(a[i]>max)
         {
            max=a[i];
         }
     }
     cout<<"Max Element in the Array = "<<max;
     return 0;
}
     
     
