#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k=0,len=0,flag=0,l,y,z;
    char ch[20];
    cout<<"enter the name\n";
    cin.getline(ch,15);
    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        for(j=0;j<=i;j++)
        {
       
            if(ch[k]!='\0')
            cout<<ch[k]<<" ";
          if(ch[k+1]=='\0')
          { y=j;
            z=i;
              goto a;
          }
          else 
          k++;
        }
        cout<<"\n";
    }
    a:while(y!=z)
    {
        cout<<"#"<<" ";
        y++;
    }
    return 0;
}
