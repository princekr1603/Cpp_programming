#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter row:";
    cin>>n;
    cout<<"enter column:";
    cin>>m;
    for(int i=0;i<n;i++){       //row
       for(int j=0;j<n;j++){      //column
            cout<<"* ";
       }
       cout<<endl;
    }

}