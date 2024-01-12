#include<iostream>
using namespace std;
void merge(int A[],int low,int upper){
    upper =sizeof(A);
    int mid;
    int i=low=0;
    int k=0;
    int j=mid+1;
    while(i<=mid && j<=upper){
        if(A[i]<A[j]){
            mid=(A[i]+A[j])/2;
            merge(A,low,mid);
            merge(A,mid+1,upper);
            // Combine(A,low,mid,upper);
        }
    }
}
int main(){
    int A[]={40,20,67,54,50};
    merge(A);
    
}
