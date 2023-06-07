//BINARY SEARCH IN ARRAYS
#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0; //start
    int e=n; //end
    while(s<=e){
        int mid=s+e/2;
        if (arr[mid]==key){
            return mid;
        } else if(arr[mid]>key){
            e=mid-1;
        } else {    //if(arr[mid]<key)
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter array size: ";
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
