//======================================================================
// Find the nth term of the arithmetic progression.
#include<iostream>
using namespace std;

int main(){
    int a,d,term,n;
    cout<<"Enter the value of first term => ";
    cin>> a ;
    cout<<"Enter the difference => ";
    cin>> d ;
    cout<<"Enter the term you want => ";
    cin>>n;
    term = a + (n-1)*d;
    cout<<"Nth of of this arithemetic progression is "<<term<<". ";
    return 0;
}