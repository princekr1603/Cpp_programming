#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"enter size of aray: ";
    cin>>n;
    int arr[n],i;
    for(int i=0;i<n;i++){
        cout<<"enter elements"<<i<<":";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    int t;
    cout<<"\nenter search value :";
    cin>>t;
    for(int i=0;i<n;i++){
        if(arr[i]== t){
            cout<<"your search value is at index no. "<<i<<endl;    
        }
        else{
            cout<<t<<" is not present in array\n";
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=2){
            if(arr[i]%(i)!=0){
                cout<<"prime value are: "<<arr[i]<<endl;
            }
        }  
    }
}