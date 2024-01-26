#include <iostream>
#include <iomanip>
#include <limits>
#include<string>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s ="HackerRank ";
    int a;
    double b;
    string c;
    cin>>a;
    cin>>b;
    cin.ignore();
    getline (cin,c);
    cout<<a+i<<endl;
    cout<<fixed<<setprecision(2)<<b+d<<endl;
    cout<<s<<c<<endl;
    return 0;
}


