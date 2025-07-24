//===================================================================
//Reverse the digits of an integer

//method-1
#include<iostream>
using namespace std;

int main(){
    string num;
    cout<<"ENTER A INT :"<<endl;
    cin>>num;
    int l = 0;
    int r = num.length() - 1;
    while(l <= r){
        cout<<num[r];
        r--;
    }
    
    return 0;
}

// method-2
// #include<iostream>
// using namespace std;

// int main(){
//     int num,a,reverse=0;
//     cout<<"ENTER A INT :"<<endl;
//     cin>>num;
//     while(num!=0){
//             a=num % 10;
//             if(rev>INT_MAX/10 || rev<INT_MIN){
//                  return 0;
//              }
//             reverse=reverse*10 + a;
//             num=num/10;
//     }
//     cout<<reverse;
//     return 0;
// }