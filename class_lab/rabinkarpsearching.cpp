#include<iostream>
using namespace std;
int main(){
    int text[11]={3,1,4,1,5,9,2,6,5,3,5};
    int pattern[2]={2,6};
    int q;
    int l= sizeof(text)/sizeof(text[0]);
    int len= sizeof(pattern)/sizeof(pattern[0]);
    cout<<"size of text size is: "<<l<<endl;
    cout<<"size of pattern size is: "<<len<<endl;

    int h,ht,hp;
    for(int i=0;i<len-1;i++){
        int h=(pattern[i]*10)+pattern[i+1];
        cout<<"value of h is: "<<h<<endl;
        hp=h%11;
        cout<<"value of hp is: "<<hp<<endl;
    }
    cout<<"value of ht is:";
    for(int i=0;i<l-1;i++){
        for(int k=0;k<len-1;k++){
            q=(text[i]*10)+text[i+1];
            int ht=q%11;
            cout<<ht<<" ";
            if(hp==ht){
                if(text[i]==pattern[k] && (text[i+1]==pattern[k+1])){
                    cout<<"\nindex no. is: "<<i<<"and"<<i+1<<endl;
                    cout<<"The value is: "<<q<<endl;
                }
            } 
        }
    }
}

