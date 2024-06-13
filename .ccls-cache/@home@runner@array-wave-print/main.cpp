#include <iostream>
#include<vector>
using namespace std;
int main() {
vector<vector<int>>matrix {3,vector<int>(3)};
  int col,row;
  //inserting elements
  for(row=0;row<3;row++){
    for(col=0;col<3;col++){
    cin>>matrix[row][col];
  }

  }
  // for(row=0;row<3;row++){
  //   for(col=0;col<3;col++){
  //   cout<<matrix[row][col];
  // }
  // cout<<endl;
  // }
  for( col=0;col<3;col++){
    if(col%2 !=0){
      for(row=0;row<3;row++){
        cout<<matrix[row][col]<<" ";
      }
    }
    else{
      for(row=3-1;row>=0;row--){
        cout<<matrix[row][col]<<" ";
      }
    }
  }
 return 0; 
}