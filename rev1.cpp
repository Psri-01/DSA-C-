#include <iostream>
using namespace std;
int main()
{
    int num1=11,num2=5;
    cout<<"Sum : "<<num1+num2<<endl;
    cout<<"Diff : "<<num1-num2<<endl;
    cout<<"Div : "<<num1/num2<<endl;
    cout<<"Mul : "<<num1*num2<<endl;
    cout<<"Mod : "<<num1%num2<<endl;
    int savings;
    cout<<"Enter savings : ";
    cin>>savings;
    if(savings>500){
        if(savings>1000){
            cout<<"Visit to Bali"<<endl;
        } else{
        cout<<"Person 2"<<endl;
        }
    } else if(savings<500){
        cout<<"Person 1"<<endl;
    } else {
        cout<<"None"<<endl;
    }
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"Even."<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    int n;
    cout<<"Enter a number till which the cumulative sum needs to be found: "<<endl;
    cin>>n;
    int sum=0;
    for(int count=1;count<n;count++){
        sum=sum+count;
    }
    cout<<sum<<endl;
    //PRIME
    int n;
    cout<<"Enter a num: "<<endl;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non prime"<<endl;
            break;
        }else{
            cout<<"Prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"2 is a prime no. "<<endl;
    }
  //PRIME WITH BOUNDS
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the limits: "<<endl;
    cin>>a>>b;
    int i;
    for(int num=a;num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;//as we dont need to print non primes
            } 
        }
        if(i==num){
            cout<<i<<" ";
        }
    }
    return 0;
}
