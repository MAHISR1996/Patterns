#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k=0,n=0,flag=0,l,y,z;
    char ch[20];
    cout<<"enter the name\n";
    cin.getline(ch,15);
    n=strlen(ch);
     for(i=0;k<n;i++)
     {
         for(j=0;j<=i;j++)
         {
         if(k<=n-1)
         cout<<ch[k];
         else
        cout<<"#";
         k++;
         }
         cout<<endl;
    }
    return 0;
}
