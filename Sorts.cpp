//BINARY SEARCH
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=s+e/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);
    return 0;
}
//MERGE SORT  O(n log n)
#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    /* create temp arrays */
    int L[n1], R[n2];
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array is: ";
    printArray(arr, arr_size);
    mergeSort(arr, 0, arr_size - 1);
    cout<<"Sorted array is: ";
    printArray(arr, arr_size);
    return 0;
}
//QUICK SORT BEST: O(n log n), WORST: O(n^2)
#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[], int l, int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quickSort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}
int main()
{
    int arr[5]={5,4,3,2,1};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
}
//INSERTION SORT
#include <iostream>
using namespace std;
int main()
{
    int n;  //array size
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1; //as it starts from i-1
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current; //j jis pos pe hoga uske aage vale pos pe current add karo
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
//SELECTION SORT
//FIND THE MINIMUM ELEM IN THE UNSORTED ARRAY AND SWAP IT WITH THE ELEM AT THE BEGINNING
/*i..............n-1
 j=i+1............n*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
}
//BUBBLE SORT
//REPEATEDLY SWAP 2 ADJACENT ELEMS IF THEY'RE IN THE WRONG ORDER
#include <iostream>
using namespace std;
int main()
{
    int n; //array size
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
//heap done in py
//COUNT SORT
//1. Find the count of every distinct element in the array.
//2. Calculate the position of each element in sorted array.
#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[], int n){
    int k=arr[0];   //k = max array
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    int count[10]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++)
    arr[i]=output[i];
}
int main()
{
    int arr[]={1,3,2,3,4,1,6,4,3};
    countSort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//COUNT INVERSION (MERGE SORT CASE)
#include<bits/stdc++.h>
using namespace std;
long long merge(int arr[],int l,int mid,int r){
    long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 and j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        else{
            arr[k]=b[j];
            inv+=n1-i;
            //a[i],a[i+1],a[i+2]...>b[j] and i<j
            k++; j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }
    return inv;
}
long long mergeSort(int arr[],int l, int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=mergeSort(arr,l,mid);
        inv+=mergeSort(arr,mid+1,r);
        inv+=merge(arr,l,mid,r);
    }
    return inv;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergeSort(arr,0,n-1);
    return 0;
}
