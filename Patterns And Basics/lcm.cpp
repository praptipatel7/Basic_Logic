//======================================================================
//Calculate the LCM of two numbers.
#include<iostream>
using namespace std;

int main(){
   
    int a,b,q,r;

    cout<<"Enter the value of A and B: ";
    cin>>a>>b;
    int LCM=a*b;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    while(b!=0){
    q=a / b;
    r=a % b;
    a=b;
    b=r;
    }
    LCM=LCM/a;
    cout<<LCM;
}