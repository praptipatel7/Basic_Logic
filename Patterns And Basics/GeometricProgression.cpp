//======================================================================
//Find the nth term of the geometric progression.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int term,a,r,n;
    cout<<"Enter the value of first term => ";
    cin>> a ;
    cout<<"Enter the ratio => ";
    cin>> r ;
    cout<<"Enter the term you want => ";
    cin>>n;
    term=a*pow(r,(n-1));
    cout<<"nth term of this geometric progression "<<term;
    return 0;
}