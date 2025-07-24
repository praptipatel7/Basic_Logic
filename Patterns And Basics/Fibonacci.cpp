//======================================================================
//Generate the first N Fibonacci numbers.
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter The numbers of fibbonaci number you want:";
    cin>>num;
    int a=0,b=1;
    for(int i=0;i<num;i++){
        cout<<a<<endl;
        int c= a+b;
        a=b;
        b=c;
    }
    return 0;
}