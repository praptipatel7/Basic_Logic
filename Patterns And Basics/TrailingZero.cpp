//======================================================================
//Count trailing zeroes in factorial of N.
#include<iostream>
using namespace std;

int zeros(int f){
    int count=0;
    while(f!=0){
        if(f%10 == 0){
        count++;
        }
        f/=10;
    }
    return count;
}

int main(){
    int n,facto=1;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=2 ; i<=n ; i++){
        facto*=i;
    }
    cout<<"Factorial of this number is : "<<facto<<endl;
    cout<<"Trailing zeros in this number is : "<<zeros(facto);
    return 0;
}