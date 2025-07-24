//======================================================================
//Generate Pascal’s Triangle up to N rows.
#include<iostream>
using namespace std;

int main(){
    int N,space,num=1;
    cout<<"Enter value of N : ";
    cin>>N;
    for(int i=0 ; i<N ; i++){
        for(space=1;space<=N-i; space++){
            cout<<" ";
        }
        for(int j=0; j<=i ; j++){
            if(j==0 || i==0)
                num=1;
            else
                num=num*(i-j+1)/j;
                cout<<" "<<num;

        }
        cout<<endl;
    }
    return 0;
}