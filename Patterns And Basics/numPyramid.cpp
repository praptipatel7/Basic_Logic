//======================================================================
//Print numbers in the pattern of a pyramid.
#include<iostream>
using namespace std;

int main(){
    int n,space;
    cout<<"enter number of rows : ";
    cin>>n;
    for(int i =0 ;i<n; i++){
        for (int k=1; k<=n-i;k++){
            cout<<" ";
        }
        for (int j=1 ; j<=i+1 ; j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}