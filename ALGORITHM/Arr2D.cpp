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
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0 ; i<mat.size(); i++){
        for(int j=0 ; j<mat[i].size();j++){
            cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;

}