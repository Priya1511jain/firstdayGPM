Q6)reverse the nuber using while loop:-

#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Write any number : " ;
    cin>>n;
    while(n!=0)
    {count=count*10;
    count=count+n%10;
       n=n/10;
    }
    cout<<"Reverse Number is "<<count<<endl;
    return 0;
}

output:-

Write any number : 647558
Reverse Number is 855746

Q7)pattern making:-

#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    { for(j=1;j<=i;j++)
       {
        cout<<"hello";
        }
      cout<<"\n"<<endl;
    }
   
    return 0;
}

output:-

hello

hellohello

hellohellohello

hellohellohellohello

hellohellohellohellohello









    




