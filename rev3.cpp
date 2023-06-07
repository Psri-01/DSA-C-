//ARMSTRONG NUM
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no: "<<endl;
    cin>>n;
    int sum=0;
    int ogn=n; //original value of n
    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(sum==ogn){
    cout<<"Armstrong number: "<<sum<<endl;
    }
    else{
    cout<<"Not an Armstrong no"<<endl;
    }
    return 0;
}
//SUM USING FUNC
#include <iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
    return;
    }
int add(int num1,int num2){
    print(num1);
    print(num2);
    int sum=0;
    sum=num1+num2;
    return sum;
}
int main()
{
    int a=2,b=3;
    cout<<add(a,b)<<" is the sum"<<endl;
    return 0;
}
//ARRAY
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
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//ARRAY MAX AND MIN VALUE
#include <iostream>
#include<climits>
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
    int maxNo=INT_MIN; //zaise hi koi no max se bada 
    int minNo=INT_MAX; //aur min se kam milta hai use update kr denge
    /*initializing the variables maxNo with INT_MIN (the smallest possible value for an integer) 
    and minNo with INT_MAX (the largest possible value for an integer)
    initializing maxNo with INT_MIN, we ensure that any element in the array will be greater than maxNo initially. 
    This allows us to compare the elements in the array and update maxNo whenever we encounter a larger value.
    By initializing minNo with INT_MAX, we ensure that any element in the array will be smaller than minNo initially. 
    This allows us to compare the elements in the array and update minNo whenever we encounter a smaller value.*/
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
        /*if(arr[i]>maxNo){
            maxNo=arr[i];
        }
        if(arr[i]<minNo){
            minNo=arr[i];
        }*/
    }
    cout<<"Max :"<<maxNo<<" "<<"Min :"<<minNo<<endl;
    return 0;
}
//LINEAR SEARCH IN ARRAYS
#include <iostream>
#include<climits>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
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
    cout<<linearSearch(arr,n,key)<<endl;
    return 0;
}
