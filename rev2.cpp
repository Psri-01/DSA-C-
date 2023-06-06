#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter a character: "<<endl;
    cin>>button;
    switch(button){
        case 'a':
        cout<<"Hello"<<endl;
        break;
        case 'b':
        cout<<"Salut"<<endl;
        break;
        case 'c':
        cout<<"Hola"<<endl;
        break;
        case 'd':
        cout<<"Ciao"<<endl;
        break;
        default:
        cout<<"I don't know that language yet"<<endl;
        break;
    }
    //SIMPLE CALCULATOR USING SW CASE
    int n1,n2;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"Enter an operation: "<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        case '%':
        cout<<n1%n2<<endl;
        break;
        default:
        cout<<"I don't know that operation yet"<<endl;
        break;
    } //PRE N POST INC
    int i=1;
      //1   //3
    i=i++ + ++i;
    cout<<i<<endl;
    int i=1;
    int j=2;
    int k;
    //1  2 1,new i=2 2,j=3  3   4     
    k=i + j + i++ + j++ + ++i + ++j;
    cout<<k<<endl; //13
    int i=0;
     //0     0     1     1    
    i=i++ - --i + ++i - i--;
     //1 then 0
    cout<<i<<endl; 
    //TYPE CASTING
    float ch=97.38246;
    int x;
    x=int(ch);
    cout<<x<<endl; 
    //PRIME NO WITH FLAG
#include<cmath>  
    int n;
    cout<<"Enter a no: "<<endl;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            flag=1;
            break;
        }
    } if(flag==0){
        cout<<"is prime"<<endl;
    }
    //REVERSE OF A NUMBER
    int n;
    cout<<"Enter a no: "<<endl;
    cin>>n;
    int reverse;
    while(n>10){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}
