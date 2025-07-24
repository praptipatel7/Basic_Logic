//====================================================================
//Print all prime numbers from 1 to N.
#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"Enter the number to print prime number from 1 to __?";
    cin>>n;
    for(int i=2;i<=n;i++){
        int prime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
    if(prime==1){
        cout<<i<<"  ";
    }
        
    }
}