//======================================================================
//Find factorial of a number (recursion & iteration).
#include<iostream>
using namespace std;

int main(){
    int num,facto=1;
    cout<<"ENTER A INT :"<<endl;
    cin>>num;
    for(int i=1 ; i<=num ; i++){
        facto=i*facto;
    }
    cout<<"Fctorial of a num="<<facto;
    return 0;
}