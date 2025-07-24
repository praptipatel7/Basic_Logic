//====================================================================
//Check if a number is a prime.
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"ENTER A INT :";
    cin>>num;
    int prime=1;
    for(int i=2;i<=num/2;i++){
        if (num%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        cout<<"yes it is prime";
    }
    else{
        cout<<"no it is not prime";
    }

}