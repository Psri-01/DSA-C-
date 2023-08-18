/* A painter paints 1 unit of a board in 1 unit of time and 
each painter will paint consecutive boards. Find the minimum time that 
will be required to paint all the boards 
n-length of n diff boards
m-painters available*/

#include<iostream>
using namespace std;

int findFeasible(int boards[], int n, int limit){
    int sum=0, painters=1;  //boards length sum
    for(int i=0;i<n;i++){
        sum+=boards[i];
        if(sum>limit){
            sum=boards[i];
            painters++;
        }
    }
    return painters;
}

int paintersPartition(int boards[], int n, int m){
    int totalLength=0, k=0;
    for(int i=0;i<n;i++){
        k=max(k,boards[i]);
        totalLength+=boards[i];
    }
    
    int low=k,high=totalLength;
    while(low<high){
        int mid=(low+high)/2;
        int painters=findFeasible(boards,n,mid);
        if(painters<=m){
            high=mid; //left half        
            }
        else{
            low=mid+1; //right half
        }
    }
    return low;
}

int main() {
    int arr[]={10,20,30,40};
    int n=4;
    int m=2;
    cout<<"Minimum time to paint boards: "<<paintersPartition(arr,n,m);
    return 0;
}
