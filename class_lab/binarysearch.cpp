#include<iostream>
using namespace std;
int mid;
int binarysearch(int A[],int low,int upper,int key){

    if(low<=upper){
        mid=(low+upper)/2;

        if(key==A[mid]){
            return mid;
        }
        else if(key<A[mid]){
            return binarysearch(A,low,mid-1,key);
        }
        else{
            return binarysearch(A,mid+1,upper,key);
        }
    }
    return-1;
}
int main(){
    int arr[]={2,4,6,7,8,15,24,50};
    binarysearch(arr,0,7,15);
    cout<<"index no.is "<<mid;
}


