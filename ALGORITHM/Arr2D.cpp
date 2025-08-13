//Diagonal Sum In 2D
// #include<iostream>
// using namespace std;

// int main(){
//     int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int row=3, col=3;
//     int sum=0;
//     for(int i=0;  i<row ; i++){
//         sum+=mat[i][i];
//         if(i!=col-1-i){
//             sum+=mat[i][col-i-1];
//         }
//         // for(int j =0 ; j<col ; j++){
//         //     if(i==j){
//         //         sum+=mat[i][j];
//         //     }else if(j==col-1-i){
//         //         sum+=mat[i][j];
//         //     }
//         // }
//     }
//     cout<<"Diagonal sum of out matrix is :"<<sum;
//     return 0;
// }






//2D Vector
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0 ; i<mat.size(); i++){
//         for(int j=0 ; j<mat[i].size();j++){
//             cout<<mat[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }





//Search in 2D vector
// #include<iostream>
// #include<vector>
// using namespace std;
// bool SearchInRow(vector<vector<int>>& mat , int target, int midRow){
//     int col = mat[0].size();

//     int st=0 , end =col-1;
        
//     while(st<=end){
//         int mid = st+(end-st)/2;
//         if(target==mat[midRow][mid]){
//             cout<<true;
//             return 0;
//         }
//         else if(target>mat[midRow][mid]){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     cout<<false;
//     return 0;
// }


// int main(){
//     vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//     int target = 3;
//     //Binary Search on total number of rows
//     int m = mat.size();
//     int n = mat[0].size();
//     int sRow=0 , eRow=m-1;
//     while(sRow<=eRow){
//         int midRow = sRow + (eRow - sRow) / 2;

//         if(target>=mat[midRow][0] && target<=mat[midRow][n-1]){
//             return SearchInRow(mat, target, midRow);
//         }else if(target>mat[midRow][n-1]){
//             sRow=midRow+1;
//         }else{
//             eRow=midRow-1;
//         }
//     }
//     cout<<false;
//     return 0;
// }





//Search a 2D matix II
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> mat = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target=5;
    int n = mat.size(), m = mat[0].size();
    int r =0 , c=m-1;
    while(r<n && c>=0){
        if(target == mat[r][c]){
            cout<<true;
            return 0;
        }else if(target<mat[r][c]){
            c--;
        }else{
            r++;
        }
    }
    cout<<false;
    return 0;    
}