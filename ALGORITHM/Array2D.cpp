//How to for 2D array and Access its elements
// #include<iostream>
// using namespace std;

// int main(){
//     int row,col;
//     cout<<"Enter number of rows and columns you want : ";
//     cin>>row>>col;
//     int matrix[row][col];
//     cout<<"Enter elemets you want to store in matrix row wise : ";
//     for(int i=0 ; i<row ; i++){
//         for(int j=0  ; j<col ; j++){
//             cin>>matrix[i][j];
//         }
//     }

//     cout<<"Your Final Matrix is :"<<endl;
//     for(int i=0 ; i<row ; i++){
//         for(int j=0  ; j<col ; j++){
//             cout<<matrix[i][j]<< "  ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }




//linerar search in 2d array
// #include<iostream>
// using namespace std;

// pair<int,int> linearsearch(int matrix[3][3],int key ){
//     int row=3, col=3;
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             if(matrix[i][j] == key) return {i, j};
//         }
//     }
//     return {-1,-1};
// }

// int main(){
//     int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int row=3, col=3;
//     int key;
//     cout<<"Enter number you want to search: ";
//     cin>>key;
//     pair<int, int> pos=linearsearch(mat, key);
//     if(pos.first !=-1){
//         cout<<"element found at : ("<<pos.first<<","<<pos.second<<")"<<endl;
//     }
//     return 0;
// }



//Maximum row sum
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int mat[3][3] = {{1,2,3},{4,5,100},{7,8,9}};
//     int row=3, col=3;
//     int maxSum=INT_MIN;
//     for(int i=0 ; i<row ; i++){
//         int sum=0;
//         for(int j=0 ; j<col ; j++){
//             sum +=mat[i][j]; 
//         }
//         maxSum=max(maxSum,sum);
//     }
//     cout<<maxSum;
//     return 0;
// }




// Maximum Column sum
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row=3, col=3;
    int maxSum=INT_MIN;
    for(int i=0 ; i<row ; i++){
        int sum=0;
        for(int j=0 ; j<col ; j++){
            sum +=mat[j][i]; 
        }
        maxSum=max(maxSum,sum);
    }
    cout<<maxSum;
    return 0;
}
