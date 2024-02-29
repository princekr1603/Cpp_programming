// #include<iostream>
// using namespace std;
// int main()
// {
// cout<<"Enter n: ";
//     int n;
//   cin>>n;
//     int z=1;
//   for ( int i=0; i<=n; i++){
//     for (int j=n; j>i; j--){
//       cout<<" "; 
//     }
//     cout<<"*";  
//     if ( i>0)
//     {
//       for ( int k=1; k<=z; k++)
//       {
//         cout<<" ";
//       }
//       z+=2;
//       cout<<"*";
//     }
//     cout<<endl;
//   }

 // z-=4;

//   for (int i=0; i<=size-1; i++)
//   {
//     for (int j=0; j<=i; j++)
//     {
//       cout<<" ";
//     }

//     cout<<"*";

//     for (int k=1; k<=z; k++)
//     {
//       cout<<" ";
//     }
//     z-=2;

//     if (i!=size-1)
//     {
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// return 0;
//}
//--------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
  int i,j,n;
  cout<<"Enter n: ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++){
    cout<<" ";
    }
    for(j=1;j<=2*i-1;j++){
        if(j==1 || j==(2*i-1)){
            cout<<"*";
        }
        else{
            cout<<" ";
    }
  }
    cout<<"\n";
    
    
  }
//     for(i=r;i>=1;i--)
//   {
//     for(j=1;j<=r-i;j++)
//     cout<<" ";
//     for(j=1;j<=2*i-1;j++)
//     {
//      if(j==1 || j==(2*i-1))
//     cout<<"*";
//     else
//     cout<<" ";
//   }
//     cout<<"\n";
    
//   }
//   return 0;
}