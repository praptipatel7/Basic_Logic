//======================================================================
//Count the number of digits in a number.
#include<iostream>
using namespace std;

int main(){
    int num,count=0;
    cout<<"Enter The number:";
    cin>>num;
    while(num!=0){
        num=num/10;
        count++;
    }
    cout<<count;
    return 0;
}