//======================================================================
//Check if a number is a strong number.
#include<iostream>
using namespace std;

int facto(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto=facto*i;
    }
    return facto;
}

int main(){
    int num,a,sum=0,len;
    cout<<"Enter a number =>";
    cin>>num;
    int original=num;
    while(num!=0){
        a=num%10;
        sum+=facto(a);
        num/=10;
    }
    if(sum==original){
        cout<<"YAY !! The number is a strong number . ";
    }
    else{
        cout<<"TRY !!! AGAIN .";
    }
    return 0;
}