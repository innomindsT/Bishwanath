#include<iostream>
#include<string.h>
using namespace std;
int main()
{
      char s[50];
      cout<<"Enter a String : ";
      cin.getline(s,sizeof(s));
      cout<<endl;
      int n=strlen(s);
      
      cout<<"String Before Reverse = "<<s<<endl;
      cout<<"String After Reverser = ";
      for(int i=n-1;i>=0;i--)
      {
          cout<<s[i];
      }
      cout<<endl;
      return 0;
}
      
