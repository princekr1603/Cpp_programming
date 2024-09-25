#include<iostream>
using namespace std;
int main()
{
cout<<"Enter n: ";
    int n;
  cin>>n;
    int z=1;
  for ( int i=0; i<=n; i++){
    for (int j=n; j>i; j--){
      cout<<" "; 
    }
    cout<<"*";  
    if ( i>0)
    {
      for ( int k=1; k<=z; k++)
      {
        cout<<" ";
      }
      z+=2;
      cout<<"*";
    }
    cout<<endl;
  }

 z-=4;

  for (int i=0; i<=n-1; i++)
  {
    for (int j=0; j<=i; j++)
    {
      cout<<" ";
    }

    cout<<"*";

    for (int k=1; k<=z; k++)
    {
      cout<<" ";
    }
    z-=2;

    if (i!=n-1)
    {
      cout<<"*";
    }
    cout<<endl;
  }
return 0;
}
