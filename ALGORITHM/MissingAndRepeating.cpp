//=======================================================================================================
//Find missing and repeating number
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    vector<vector<int>> grid = {{1,3},{2,2}};
    vector<int> ans;
    unordered_set<int> s;
    int n=grid.size();
    int a,b, actualsum=0, expectedsum=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            actualsum+=grid[i][j];
            if(s.find(grid[i][j])!= s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expectedsum = (n*n)*(n*n+1)/2;
    b=expectedsum+a-actualsum;
    ans.push_back(b);
    cout<<ans[0]<<"  "<<ans[1];
    return 0;
}
