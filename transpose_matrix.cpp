#include<iostream>
using namespace std;
int main()
{
      int n,m,i,j;
      cout<<"Enter the Number of Rows and Columns : ";
      cin>>n>>m;
      int a[m][n];
      cout<<"Enter the Elements of the 2D array : ";
      for(i=0;i<n;i++)
      {
           for(j=0;j<m;j++)
           {
                cin>>a[i][j];
           }
      }

      cout<<"Elements of the 2D Array : " <<endl;
      for(i=0;i<n;i++)
      {
         for(j=0;j<m;j++)
         {
               cout<<a[i][j]<<" ";
         }
         cout<<endl;
      }

      int b[30][30];
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
            b[j][i]=a[i][j];
          }
      }

      cout<<"Elements of the 2D Array After Transpose : " <<endl;
      for(i=0;i<m;i++)
      {
         for(j=0;j<n;j++)
         {
               cout<<b[i][j]<<" ";
         }
         cout<<endl;
      }
      return 0;
}

