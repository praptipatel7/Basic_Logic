//======================================================================
//Convert decimal to binary and vice versa.
#include<iostream>
#include<cmath>
using namespace std;

string decimaltobinary(int deci){
    if(deci == 0){
        return "0";
    }
    string bin="";
    while(deci>0){
        bin=to_string(deci%2) + bin;
        deci=deci/2;
    }
    return bin;
}
int binarytodecimal(string bin){
    int deci=0;
    int length=bin.length();
    for(int i=0;i<length;i++){
        deci=deci+(bin[length -1- i]-'0')*pow(2,i);
    }
    return deci;
}

int main(){
    int n;
    cout<<"Choose one:"<<endl<<"1.)Decimal to Binary."<<endl<<"2.)Binary to Decimal";
    cin>>n;
    if(n==1){
    int num;
    cout<<"ENTER A DECIMAL NUMBER :";
    cin>>num;
    cout<<"Binary form of this number is:"<<decimaltobinary(num);
    }
    if(n==2){
    string integer;
    cout<<"ENTER A BINARY NUMBER :";
    cin>>integer;
    cout<<"Decimal form of this number is :"<<binarytodecimal(integer);
    }
    else{
        cout<<"INVALID INPUT !!!!";
    }
    return 0;
}