#include<iostream>
using namespace std;
int main()
{
    char s[30];
    cout<<"Enter a String : ";
    cin.getline(s,sizeof(s));
    
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
       count++;
    }
     
    cout<<"Length of the String = "<<count;
    return 0;
}
