//======================================================================
//Sum of digits of a number (recursive & loop)
#include<iostream>
using namespace std;

int main(){
    int num,a,sum=0;
    cout<<"Enter The number:";
    cin>>num;
    while(num!=0){
        a=num%10;
        sum+=a;
        num=num/10;
    }
    cout<<sum;
}