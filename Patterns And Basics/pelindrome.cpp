//====================================================================
//Check if a number is a palindrome.
// #include<iostream>
// using namespace std;

// int main(){
//     string num;
//     cout<<"ENTER A INT :"<<endl;
//     cin>>num;
//     int pali=1;
//     int len=num.length();
//     for(int i=0;i<len/2;i++){
//         if(num[i]!=num[len-1-i]){
//         pali=0;
//         break;
//         }
//     }
//     if (pali == 1) {
//         cout << "YES, THE NUMBER IS A PALINDROME";
//     } 
//     else {
//         cout << "NO! TRY AGAIN!";
//     }
//     return 0;
// }



//Another Approach
#include<iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n!=0){
        int dig=n%10;
        if(rev>INT_MAX/10 || rev<INT_MIN){
            return 0;
        }
        rev=rev*10+dig;
        n=n/10;
    }
    return rev;
}
int main(){
    int x=122;
    if(x<0) {
        cout<<-1;
    }
    int rev =reverse(x);
    if(x == rev) cout<<"yes it is a pelindrome.";
    else cout<<"oh no ! its no a pelindrome";
}