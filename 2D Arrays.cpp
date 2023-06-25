#include<iostream>
using namespace std;
int main()
{
    int n,m; //row n cols
    cin>>n>>m;
    int arr[n][m]; //u can use float char or bool
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            //taking input
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //print output
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//SEARCHING AN ELEMENT
#include<iostream>
using namespace std;
int main()
{
    int n,m; //row n cols
    cin>>n>>m;
    int arr[n][m]; //u can use float char or bool
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            //taking input
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) {
            if(arr[i][j]==x){
            cout<<"["<<i<<","<<j<<"]"<<endl;
            flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is found\n";
    } else {
        cout<<"Element is not found\n";
    }
    return 0;
}

//SPIRAL ORDER MATRIX TRAVERSAL
/* row_start (initially 0)
   row_end (initially n-1)
   column_start(initially 0)
   column_end(initially m-1) 
   Traversals: row_start+1, column_end-1, row_end-1, column_start+1 in this order
   till row_start<=row_end & column_start<=column_end*/
