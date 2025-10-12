//==============================================================================================================
//SubArray Sum Equals K
//Brute Force Approach
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,1,1};
    int count=0;
    int n = arr.size();
    int k=2;
    for(int i=0;  i<n ; i++){
        int sum=0;
        for(int j=i ; j<n ; j++){
            sum+=arr[j];
            if(sum==k){
                count++;
            }

        }
    }
    cout<<count;

}




//==============================================================================================================
//Optimal Approach
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

// }