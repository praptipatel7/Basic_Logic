//======================================================================
//Count the number of 1s in the binary representation.
#include<iostream>
using namespace std;

int main(){
    int num,a,count;
    cout<<"Enter a number: ";
    cin>>num;
    while(num!=0){
        a=num%10;
        if(a==1){
            count+=1;
        }
        num=num/10;
    }
    cout<<"No. of ones in this number is "<<count<<".";
    return 0;
}