#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character: ";
    cin>>ch;
    int c=int(ch);
    if((c>64 && c<91)||(c>96 && c<123)){
        cout<<char(c)<<" is alphabet";
    }
    else{
        cout<<char(c)<<" is not alphabet";
        
    }
}