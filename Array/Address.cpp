#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,7,4,3,8}; 
    cout<<&arr[5]<<endl;
    cout<<&arr[0]<<endl;// 0th index address
    cout<<&arr[1]<<endl;
    cout<<arr<<endl;// 0th index address
    cout<<&arr;//0th index address
}