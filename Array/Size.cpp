#include<iostream>
using namespace std;
int main(){
    int arr[]={45,56,58,52,25,54,21,24,89};
    int n=sizeof(arr)/sizeof(arr[0]);
    int p=sizeof(arr)/sizeof(arr[7]);
    int r=sizeof(arr)/4;//size of int datatypes
    cout<<n<<" "<<p<<" "<<r;
}

//Memory Allocation
// int main( ){
//     int a[5];
//     cout<<&a[0]<<endl;
//     cout<<&a[1]<<endl;
//     cout<<&a[2]<<endl;
//     cout<<&a[3]<<endl;
//     cout<<&a[4];

// }