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
