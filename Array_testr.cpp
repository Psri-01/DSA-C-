//Given an array and two positions, do swap those elements at those two positions. If the position mention exceeds index limit, then print "Invalid".
#include<iostream>
using namespace std;
int main(){
  int array_size;
  cin>>array_size;
  int array[array_size];
  int pos1, pos2, i=0, temp;
  for(;i<array_size;i++){
    cin>>array[i];
  }
  cin>>pos1>>pos2;
  if(pos1>=array_size || pos2>=array_size){
    cout<<"Invalid";
  }
  else{
    temp=array[pos1];
    array[pos1]=array[pos2];
    array[pos2]=temp;
    for(i=0;i<array_size;i++){
      cout<<array[i];
    }
  }
}

//Given the size of array and array values to function arr_reverse(), write a code to reverse the given array.
#include<iostream>
using namespace std;
void arr_reverse(int no_ele,int arr[])
{
  int st,end;
  int temp;
  st=0;
  end=no_ele-1;
   while(st<end)
  {
    temp=arr[st];
    arr[st]=arr[end];
    arr[end]=temp;
    st+=1;
    end-=1;
  }
}

int main(){
    int array_size;
    cin>>array_size;
    int array[array_size];
    for(int index = 0 ; index < array_size ; index++){
        cin>>array[index];
    }
    arr_reverse(array_size,array); 
   for(int index = 0 ; index < array_size ; index++){
        cout<<array[index]<<" ";
    }
 return 0;   
}

/*Given program to an array and element to be inserted and position in which the new element is to be inserted from the user. 
Insert the element at given insert position and display the updated array.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000],elem,n,i,loc;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>elem;
    cin>>loc;
    for(i=n;i>=loc;i--)
    arr[i]=arr[i-1];
    n++;
    arr[loc-1]=elem;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}

/*Read number of elements,array and position of element to be deleted.
 Delete the element at the given position or print "deletion not possible" if given position is out of Bound.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000],pos,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>pos;
    if(pos>=n+1)
    cout<<"Deletion not possible";
    else
    {
        for(i=pos;i<n-1;i++)
        arr[i]=arr[i+1];
        for(i=0;i<n-1;i++)
        cout<<arr[i]<<" ";
        }
        return 0;
}

/*Find and print all unique elements of a given array of integers*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Unique elements: ";
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<i;j++)
            if(arr[i]==arr[j])
            break;
            if(i==j)
            cout<<arr[i]<<" ";
    }
    return 0;
}

//given an array a[] of size n, for every i from 0 to n-1 output max(a[0],a[1]...a[i])
/*approach: keep a variable mx which stores the max till ith element.
iterate over the array and update;  mx=max(mx,arr[i]) */
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
    int mx=INT_MIN;
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}

/*Subarray: contiguous part of the array. No of subarrays of an array with n elems = nc2+n=n(n+1)/2.
Subsequence: a seq that can be derived an array by selection 0 or more elems without changing the order of the remaining elems.
No of Subsequences of an array with n elems = 2^n.
Every subarray is a subsequence but every subsequence is not a subarray.*/

//Given an array a[] of size n, output sum of each subarray of the given array.
/*Approach: iterate over all the subarrays.
for every i=0 to i=n-1:
 for every j=i to j=n-1:
  output sum[i...j]*/
  
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int curr=0;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr+=arr[j];
            cout<<curr<<" ";
        }
    }
    return 0;
}


//Length of the longest contiguous arithmetic subarray.
/*Approach: loop over the array and find teh ans.
reqd variables: 1) previous common difference (pd)
2) current arithmetic subarray Length (curr)
3) max arithmetic subarray Length (ans)
*/
  
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}


/*qn in phone screenshots;
Approach: Brute force:
iterate over all the elems and check if its  a record breaking day or not.
T.N.: to check if a[i] is a record breaking day, we have to iterate over a[0],a[1]...a[i-1].
Time complexity for this op: O(n)
Overall time complexity: O(n^2)
Optimised approach: If we can optimise step 1 then we can optimize our overall solution.
For step 1: we need to check if a[i]>{a[i-1],a[i-2],...a[0]} which is the same as
    a[i]>max(a[i-1],a[i-2],...a[0])
 keep a variable mx which will store the max value till a[i]. Then check
        a[i]>mx
        a[i]>a[i+1], (if i+1<n)
        and update mx, mx=max(mx,a[i])          so step 1 tc=O(1), overall=O(n).
*/
  
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    if(n==1){
        cout<<"l"<<endl;
        return 0;
    }
    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout<<ans<<endl;
    return 0;
}

/*You are required to implement the following Function def LargeSmallSum(arr). 

The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest largest element from the even positions and second smallest from the odd position of given ‘arr’.

Assumption:

All array elements are unique
Treat the 0th position a seven
NOTE

Return 0 if array is empty
Return 0, if array length is 3 or less than 3
Example:-

Input

arr:3 2 1 7 5 4

Output

7*/
#include <bits/stdc++.h>
using namespace std;
int Largesum(int *arr,int n){
    int ans,i,j,temp;
    int even[n], odd[n];
    int evencount=0,oddcount=0;
    if(n<=3)
    {
        ans=0;
    }
    else{
        even[0]=arr[0];
        evencount=1;
        for(i=1; i<n; i++)
        {
            if(i%2==0)
            {
                even[evencount]=arr[i];
                evencount++;
            }
            else{
                odd[oddcount]=arr[i];
                oddcount++;
            }
        }
        sort(even,even+evencount);
        sort(odd,odd+oddcount);
        ans=even[evencount-2]+odd[oddcount-2];
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int result;
    result=Largesum(arr,n);
    cout<<result<<endl;
    return 0;
}

//PYTHON
length=int(input())
arr=list(map(int, input().split()))
even_arr=[]
odd_arr=[]
for i in range(length):
    if(i%2==0):
        even_arr.append(arr[i])
    else:
        odd_arr.append(arr[i])
even_arr=sorted(even_arr)
odd_arr=sorted(odd_arr)
print(even_arr[len(even_arr)-2]+odd_arr[1])
