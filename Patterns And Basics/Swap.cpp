//======================================================================
//Swap two numbers without using a temporary variable.
#include<iostream>
using namespace std;

int main(){
    int a ,b ;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<"Before swaping :"<<endl;
    cout<<"A ="<<a<<endl<<"B ="<<b<<endl;
    a+=b;
    b=a-b;
    a=a-b;
    cout<<"After  swaping :"<<endl;
    cout<<"A ="<<a<<endl<<"B ="<<b;
    return 0;
}