//======================================================================
//Check if a number is Armstrong.
#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num){
    int temp=num;
    int digits=0;
    while(temp!=0){
        digits++;
        temp=temp/10;
    }
    int sum=0;
    temp=num;
    while(temp!=0){
        int digit=temp%10;
        sum=sum+pow(digit,digits);
        temp/=10;
    }
    return num==sum;
}
int main(){
    int num;
    cout<<"Enter The number:";
    cin>>num;
    if(isArmstrong(num)){
        cout<<num<<" is an Armstrong number .";

    }
    else{
        cout<<num<<" is not an Armstrong number .";
    }
    return 0;
}