#include<iostream>
using namespace std;
int main()
{
     char s[30],cmax=0;
     int max=0;
     cout<<"Enter the String : ";
     cin.getline(s,sizeof(s));
     
     for(char c='a';c<='z';c++)
     {
          int count=0;  
          for(int i=0;s[i]!='\0';i++)
          {
              if(c==s[i])
              {
                 count++;
              }
          }
          if(count>max)
	  {
		  max=count;
		  cmax=c;
	  }
     }
     cout<<"Char '"<<cmax<<"' Has Occured "<<max<<" Times in the String."<<endl;
     return 0;
}

