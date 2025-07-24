//======================================================================
//Find all perfect numbers in a given range.
#include<iostream>
using namespace std;

bool isperfect(int n){
    int sum=0;
    for(int i=1 ; i<=n/2 ; i++){
        if(n % i == 0) {
            sum += i; 
        }
    }
    return sum == n;
}

int main(){
    int num1,num2 ;
    cout<<"Enter range of number : ";
    cin>>num1>>num2 ;
    cout<<"Perfect numbers between "<<num1<<" and "<<num2<< " are: "<<endl;

    for (int i=num1;i<=num2;i++){
        if(isperfect(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}