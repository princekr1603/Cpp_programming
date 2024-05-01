#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter m: ";
    cin>>m;
    int a[n][m];
    int transpose[n][m];
    cout<<"enter elements:"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the matrix is:"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
          transpose[j][i]=a[i][j];
        }
    }
    cout<<"the transpose of the matrix is:"<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    int l=0;
    int r=0;
    if(n==m){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==j){
                    l=a[i][j]+l;
                }            
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if((i+j)==(n+1)){
                    r=a[i][j]+r;
                }            
            }
        }
        cout<<"l="<<l<<endl;
        cout<<"r="<<r<<endl;
        if(l>r){
            cout<<"differnce is: "<<l-r;
        }
        else if(l<r){
            cout<<"differnce is:"<<(l-r)*-1;
        }
    }
}
