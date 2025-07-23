//Count number of prime number in a given range using sieve of eratosthenes
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=1;
    vector<bool> isPrime(n+1,true);
        int count=0;

        for(int i=2 ; i<n ; i++){
            if(isPrime[i]){
                count++;

                for(int j=i*2 ; j<n ; j=i+j){
                    isPrime[j]=false;
                }
            }
        }
        cout<<count;
        return 0;
}
   
        