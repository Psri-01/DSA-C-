/*An algorithmic technique for solving recursive problems by trying to 
build every possible solution incrementally and removing those solutions that 
fail to satisfy the constraints of the problem at any point of time.*/
Rat in a Maze
i 1,0,1,0,1      o 1,0,0,0,0
  1,1,1,1,1        1,1,1,1,0
  0,1,0,1,0        0,0,0,1,0
  1,0,0,1,1        0,0,0,1,1
  1,1,1,0,1        0,0,0,0,1
#include<iostream>
  using namespace std;
bool isSafe(int** arr, int x, int y, int n){
  if(x<n && y<n && arr[x][y]==1){
    return true;
  }
  return false;
}
bool ratInMaze(int** arr, int x, int y, int n, int** solArr){
  if(x==n-1 && y==n-1){
    solArr[x][y]=1;
    return true;
  }
    
  if(isSafe(arr,x,y,n)){
    solArr[x][y]=1;
    if(ratInMaze(arr,x+1,y,n,solArr)){
      return true;
    }
    if(ratInMaze(arr,x,y+1,n,solArr)){
      return true;
    }
    solArr[x][y]=0;  //backtracking
    return false;
  }
  return false;
}
int main()
{
  int n;
  cin>>n;
  int** arr=new int*[n];
  for(int i=0;i<n;i++){
    arr[i]=new int[n];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  int** solArr=new int*[n];
  for(int i=0;i<n;i++){
    solArr[i]=new int[n];
    for(int j=0;j<n;j++){
      solArr[i][j]=0;
    }
  }
  if(ratInMaze(arr,0,0,n,solArr)){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<solArr[i][j]<<" ";
    }cout<<endl;
    }
  }
  return 0;
}

N Queen problem
//permutation is a rearrangement of members of a sequence into a new seq
#include <iostream>
using namespace std;
bool isSafe(int** arr, int x, int y, int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool nQueen(int** arr,int x,int n){ 
    //y is not taken into consideration cuz once we place a queen in a row the next queen automatically shits to the next row as there can be only one in a row
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col]=1;
            if(nQueen(arr,x+1,n)){
                return true;
            }
            arr[x][col]=0; //backtracking
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
        }
    }
    return 0;
}
//i/p: 4
ans:
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0
