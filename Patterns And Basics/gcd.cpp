//====================================================================
//Find the greatest common divisor (GCD) of two numbers .
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,q,r;
//     cout<<"Enter the value of A and B: "<<endl;
//     cin>>a>>b;
//     if (a < b) {
//         int temp = a;
//         a = b;
//         b = temp;
//     }

//     while(b!=0){
//     q=a / b;
//     r=a % b;
//     a=b;
//     b=r;
//     }
//     cout<<a;
// }


//Another approach
// #include<iostream>
// using namespace std;

// int main(){
//     int gcd=1;
//     int a,b;
//     cout<<"Enter the value of A and B: ";
//     cin>>a>>b;
//     for(int i=1 ; i<=min(a, b) ; i++){
//         if(a%i==0 && b%i==0){
//                     gcd=i;
//         }
//     }
//     cout<<"GCD is: "<<gcd<<endl;
//     return 0;
// }



//Euclid's Algorithm(most optimised to find GCD)
#include<iostream>
using namespace std;

int gcdrec(int a, int b){
    if(b==0) return a;

    return gcdrec(b,a % b);
}

int main(){
    cout<<gcdrec(20,24)<<endl;
    return 0;
}