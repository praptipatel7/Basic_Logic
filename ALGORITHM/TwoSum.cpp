//=============================================================================================
//Pair sum using brute force method
// - return pair in sorted array with targeted sum
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec={1,4,7,-4,0};
//     vector<int> ans;
//     int target;
//     cout<<"Enter the value of target";
//     cin>>target;
//     int n=vec.size();
//     for(int i=0 ; i<n ; i++){
//         for(int j=i+1 ; j<n ;j++){
//             if(vec[i] + vec[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//     cout<<ans[0]<<", "<<ans[1];
// }





//=============================================================================================
//Use the word "sorted " and optimize the code 

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec={-4, 0,1 ,4,7};
//     int target,n ;
//     vector<int> ans;
//     n=vec.size();
//     cout<<"Enter the value of target : ";
//     cin>>target;
//     int i=0 , j=n-1;
//     while(i<j){
//         if(vec[i]+vec[j]<target){
//             i++;
//         }
//         else if(vec[i]+vec[j]>target){
//             j--;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             break;
//         }
//     }
//     cout<<ans[0]<<", "<<ans[1];
//     return 0;
// }





//==================================================================================================
//Most Optimized Approach
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> arr = {2,7,11,15};
    int tar = 9;
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0 ; i<arr.size() ; i++){
        int first = arr[i];
        int sec = tar-first;
        if(m.find(sec)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first]=i; 
    }
    for(int val:ans){
        cout<<val <<" ";
    }
}