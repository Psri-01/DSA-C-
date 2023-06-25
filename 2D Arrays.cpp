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

//TRANSPOSE - swap only upper triangle elements
#include<iostream>
using namespace std;
int main()
{
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

//MATRIX MULTIPLICATION
//N1xN2 & N2xN3
//1<=N1,N2,N3<=100
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++)
            cin>>m1[i][j];
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++)
            cin>>m2[i][j];
    }
    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++)
            ans[i][j]=0;
    }
        for(int i=0;i<n1;i++){
          for(int j=0;j<n3;j++){   
            for(int k=0;k<n2;k++){
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++){
          for(int j=0;j<n3;j++)
              cout<<ans[i][j]<<" ";
              cout<<endl;
          }
    return 0;
}

//MATRIX SEARCH
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int r=0,c=m-1;
    bool found=false;
    while(r<n and c>=0){
        if(mat[r][c]==target){
            found=true;
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found)
        cout<<"Element found";
    else
        cout<<"Element does not exist";
    return 0;
}
