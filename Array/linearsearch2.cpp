#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter values: ";
        cin>>arr[i];
    }
    int x;
    cout<<"enter search no.: ";
    cin>>x;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<arr[i]<<" present at "<<i<<endl;
            return 0;
        }
    }
    cout<<x<<" is not found"<<endl;
    return 0;
}