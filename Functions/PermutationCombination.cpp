#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f=f*i;   
    }
    return f;
}
int main(){
    int n,r;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r:";
    cin>>r; 
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int ncr=nfact/(rfact*nrfact);
    int npr=nfact/(nrfact);
    cout<<"ncr= "<<ncr<<endl;
    cout<<"npr= "<<npr;

}
