// //Vector===========================================================================================================
// //Although we know all the basic functions we are not going to write them again 
// //we will just write what we learned new ok

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec = {1, 2, 3, 4, 5};

//     //iterator is created like this 
//     //begin point at the first index and end point at the index after the last one that is n+1 
//     vector<int> :: iterator i;
//     for(i = vec.begin() ; i!=vec.end() ; i++){
//         cout<<*(i)<<"  ";
//     }
//     cout<<endl;
//     //the syntex of iterator are very complex so morden cpp allow us to write it like 
//     //this also just write "auto" and it will understand we are trying to create an iterator
//     //rbegin that is reverse begin point at the last index 
//     //and rend that is reverse end point at the index before the first one that is 0-1
//     //for rend we can declare the iterator like this 
//     //vector<int> :: reverse_iterator it;
//     for(auto it = vec.rbegin() ; it!=vec.rend() ; it++){
//         cout<<*(it)<<"  ";
//     }
//     cout<<endl;
// }

// //List============================================================================================================
// // rest all features are same like vector only difference is that it is like a doubley linked 
// //list and can be accessed form both front and back
// //!!!!!!WE CAN NOT RANDOMELY ACCESS VALUES IN BETWEEN LIKE l[2]

// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;

// int main(){
//     list<int> l;

//     l.emplace_back(1);
//     l.emplace_front(5);
//     l.push_back(3);
//     l.push_front(4);

//     l.pop_back();
//     l.pop_front();

//     for(int val : l){
//         cout<<val<<"  ";
//     }
//     cout<<endl;
//     return 0;

// }

//Deque(Double ended Queue)======================================================================================================
//Totally same like list only difference is that 
//1)we need to add header file calles<deque>
//2)it is initiallised as "deque<int> d;"
//3)WE CAN ACCESS DATA FROM INBETWEEN ALSO LIKE d[3]

//Pair=======================================================================================================
//like Dictionary in python with only one index
//if we want multiple index then we should create a vector of pairs
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>> vec = {{1, 2}, {3, 4}, {5, 6}};

    vec.push_back({7, 8});
    vec.emplace_back(9, 10);

    for(auto p : vec){
        cout<<p.first<<"  "<<p.second;
        cout<<endl;
    }
}

//Stack(LIFO)===============================================================================================
//push, emplace, top, pop, size, swap , empty
//similar to vector just have last in first out property

//Queue(FIFO)==============================================================================================
//similar to Stack just one difference is that it is first in first out

//Priority Queue ===========================================================================================
//priority_queue<unt> q;
//just a sorted form of queue by default greatest value is on the top 
//but if we want smallest value oon the top or we can say reversed priority queue
//we will write priority_queue<int, vector<int>, greater<int>> q;


//Map(key, value)=======================================================================================================
//key can not be duplicate
//map<String, int> m;
//m[key] = value;
//sorted in ascending order of keys


//Multi Map====================================================================================================
//same as map but allows duplicate value, no square brackets

//unordered map===========================================================================================
//similar to map but not sorted
//leass time comlexity

//Set=====================================================================================================
//similar to  map, unique sorted values

//Multi Set====================================================================================================
//same as set but allows duplicate value, no square brackets

//unordered set===========================================================================================
//similar to set but not sorted
//least time comlexity
//no lower bound upperbound

//Algorithms
//sort(start, end)
//to print elements in decending order sort(arr, arr+n, greater<int>())