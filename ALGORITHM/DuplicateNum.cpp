//====================================================================================================
//Find the duplicate number
// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// int main(){
//     vector<int> nums = {1,3,4,2,2};
//     unordered_set<int> s;
//     for(int val: nums){
//         if(s.find(val)!=s.end()){
//             cout<<val;
//         }
//         s.insert(val);
//     }
//     return -1;
// }





//optimised without modifying the array nums and use only constant extra space
//slow and fast pointer approach
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,3,4,2,2};
    int slow=arr[0] , fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);
    slow = arr[0];
    while(slow!=fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    cout<<slow;
    return 0;
}