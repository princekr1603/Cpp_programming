#include<iostream>
//#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter values: ";
        cin>>arr[i];
    }
    int max=arr[0];
    //int max=INT_MIN;
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"maximum is: "<<max;
    
}