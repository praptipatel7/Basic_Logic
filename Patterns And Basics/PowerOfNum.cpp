//======================================================================
//Find power of a number (recursive exponentiation).
#include<iostream>
using namespace std;
int power(int b,int expo){
    if(expo ==0){
        return 1;
    }
    return b*power(b,expo - 1);
}

int main(){
    int a,exponent;
    cout<<"ENTER THE VALUE OF BASE (a)";
    cin>>a;
    cout<<"ENTER THE VALUE OF EXPONENT: ";
    cin>>exponent;
    cout<<a<<"^"<<exponent<<"="<<power(a,exponent);
    return 0;
}