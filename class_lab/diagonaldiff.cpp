#include<iostream>
using namespace std;
int main(){
    int l=0;
    int r=0;
    int arr[4][4]={{1,2,3,4},{8,7,6,5},{9,10,11,12},{16,15,14,13}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                l=arr[i][j]+l;   
            }
            else if((i+j)==3){
                r=r+arr[i][j];
            }
        }
    }
    cout<<"l= "<<l;
    cout<<"\nr= "<<r;
    if(l>r){
        cout<<"\nfinal ans= "<<l-r;
    }
    else{
        cout<<"\nfinal ans= "<<r-l;    
    }
}