#include <iostream>
using namespace std;
int Sum(int n){
    if(n==0)
    {
        return 0;
    }
    int prevSum=Sum(n-1);
    return n+prevSum; 
}
int main()
{
    int n;
    cin>>n;
    cout<<Sum(n)<<endl;
    return 0;
}
//POWER OF P
#include <iostream>
using namespace std;
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int prevPower=power(n,p-1);
    return n*prevPower;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
    return 0;
}
//FACTORIAL
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    {
        return 1;
    }
    //int prevfact=factorial(n-1);
    return n*factorial(n-1); 
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
//FIBONACCI
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2); 
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}
