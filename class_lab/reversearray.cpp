#include <iostream>
using namespace std;
int main() {
    int n,a;
   cout<<"enter n:";
   cin>>n;
   int arr[n],res[n];
   
   for(int i=0;i<n;i++){
       cout<<"enter number: ";
       cin>>arr[i];
       //res[i]=arr[i];
   } 
   for(int i=0;i<n;i++){
       cout<<arr[n-i-1]<<" ";
   }
    return 0;
}